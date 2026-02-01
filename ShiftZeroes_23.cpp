#include <iostream>
using namespace std;
int main ()
{
     vector <int> nums={1,0,2,3,0,4,5,0}; //Example statement 
    int i = 0; 
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    return 0;
}
// Move all elements to end 
// Two pointer question No. 283