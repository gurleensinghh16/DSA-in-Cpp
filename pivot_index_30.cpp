#include <iostream>
using namespace std;
int main ()
{
    vector <int> nums={1,0,2,3,0,4,5,0}; //Example statement 
     int left=0,right=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            right=sum-left-nums[i];
            if(left==right){
               cout<<i<<endl;
               break;
            }
            left+=nums[i];
        }
        
    return 0;
}
// Check pivot Index :
// Leetcode question No. 724