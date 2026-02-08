#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int val;
    vector<int> nums={0,1,2,2,3,0,4,2};
    cout<<"Enter the value to remove : "<<endl;
    cin>>val;
    //int n=nums.size();
    for(int i=0;i<nums.size();i++){
        if(nums[i]==val){
            nums.erase(nums.begin() +i);
            i--;
        }
    }
    cout<<nums.size()<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
        
    }
    return 0;
}
// Erase a specific element 