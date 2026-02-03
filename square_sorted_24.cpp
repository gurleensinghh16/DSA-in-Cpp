#include <iostream>
using namespace std;
int main ()
{
    vector <int> nums={1,0,2,3,0,4,5,0}; //Example statement 
     int i = 0; 
     for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
           cout<<nums[i]<<" ";
        }
    
    return 0;
}
// squares of sorted array :
// qustion no. 977