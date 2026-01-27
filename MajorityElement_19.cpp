#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector <int> nums={2,2,1,1,1,2,2};
    bool bol=true;
        int count=1;
        int el;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
                el=nums[i];
            }
            else{
                if(count>nums.size()/2){
                    cout<<nums[i];
                    break;
                }
                    count=1;
            }
        }
        cout<<nums[nums.size()-1];
    return 0;
}
// Return the majority element 
// leet code No.169