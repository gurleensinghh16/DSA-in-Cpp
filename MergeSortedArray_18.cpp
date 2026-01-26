#include <iostream>
using namespace std;
int main ()
{
    vector <int> nums1={-1,0,0,3,3,3,0,0,0};
    vector <int> nums2={1,2,2};
     int m=6;
     int n=3;

        for(int i=nums1.size()-1;i>=0;i--){
            if(nums1[i]==0){
                nums1.erase(nums1.begin()+i);
            }
            else break;
        }
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        
        while(nums1.size()!=m+n){
            nums1.push_back(0);
        }
        for(int i=0;i<nums1.size();i++){
            cout<<nums1[i]<<" ";
        }
     return 0;
}
// Merge sorted array :
// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.