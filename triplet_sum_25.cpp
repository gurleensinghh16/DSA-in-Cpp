#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    // FIX 1: nums must be vector<int>, not vector<vector<int>>
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans;

    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {

        // skip duplicate i
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int l = i + 1;
        int r = n - 1;

        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];

            if (sum == 0) {
                ans.push_back({nums[i], nums[l], nums[r]});
                l++;
                r--;

                // skip duplicate l
                while (l < r && nums[l] == nums[l - 1]) l++;

                // skip duplicate r
                while (l < r && nums[r] == nums[r + 1]) r--;
            }
            else if (sum < 0) {
                l++;
            }
            else {
                r--;
            }
        }
    }

    // FIX 2: print vector<vector<int>> correctly
    for (int i = 0; i < ans.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "] ";
    }

    return 0;
}
// triplet sum zero problem 
// leetcode question no. 15