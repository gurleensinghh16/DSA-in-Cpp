#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector <int> nums={0,0,1,1,1,2,2,3,3,4};
     for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+(i+1));
                i--;
            }
        }
        int k=nums.size();
        cout<<k;
    return 0;
}
// Remove duplicate elements and return count of unique elements :