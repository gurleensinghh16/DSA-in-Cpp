#include <iostream>
using namespace std;
int main ()
{
    vector <int> nums={0,4,5,0,3,6}; //Example statement 
    int n=nums.size();
        sort(nums.begin(),nums.end());
            int i=0;
        while(true){
            if(nums[i]==0 && n==1){
             cout<<false;
             return 0;
            }
            if(nums[i]==1 && n==1){ 
                cout<<false;
                return 0;
            }
                 if(i>nums.size()-2){
                    cout<<false;
                    return 0;
                }
            if(nums[i]==nums[i+1]){
                cout<<true;
                return 0;
                }
            i++;
        }
        cout<<false;
    return 0;
}
//Contains Duplicate : Question No.217 leetcode
// Check if array contains duplicate element or not :