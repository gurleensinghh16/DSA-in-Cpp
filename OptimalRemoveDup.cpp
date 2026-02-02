#include <iostream>
using namespace std;
int main ()
{
    vector <int> nums={1,0,2,3,0,4,5,0}; //Example statement
    int j=1,i=1;
        int k=1;
        while(j<nums.size()){
            if(nums[i-1]!=nums[j]){
                nums[i]=nums[j];
                i++;
                k++;
            }
                j++;
        }
        cout<<k<<endl<<"Final array is : " ;

        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        } 
    return 0;
}
// Remove duplicates from the array optimal
// two pointer. question no. 26