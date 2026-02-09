#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int countOp = 0;   // global counter

int minimumOperations(vector<int>& nums) {
    int n = nums.size();
    int minVal = INT_MAX;

    // find smallest positive element
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0 && nums[i] < minVal) {
            minVal = nums[i];
        }
    }

    // base case: all elements are zero
    if (minVal == INT_MAX) {
        return countOp;
    }

    // subtract minVal from all positive elements
    for (int j = 0; j < n; j++) {
        if (nums[j] > 0) {
            nums[j] -= minVal;
        }
    }

    countOp++;
    return minimumOperations(nums);
}

int main() {
    vector<int> nums = {1, 5, 0, 3, 5};

    int result = minimumOperations(nums);
    cout << "Minimum operations: " << result << endl;

    return 0;
}
// Make array zero by subtracting equal amounts :
// Leetcode question no. 2357