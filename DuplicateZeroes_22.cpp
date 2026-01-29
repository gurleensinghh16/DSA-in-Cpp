#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
     vector <int> nums={1,0,2,3,0,4,5,0}; //Example statement 
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            nums.insert(nums.begin()+i,0);
            i++;
        }
    }
    cout<<"The array becomes : "<<endl;
    for(int i=0;i<n;i++){
       cout<<nums[i]<<" ";
    }
    return 0;
}
// Duplicate Zeroes : Question No.1089 leetcode
// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.