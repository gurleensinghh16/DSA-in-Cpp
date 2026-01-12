#include <iostream>
using namespace std;
int main ()
{
    int n,target,chk=0;
    cout<<"Enter size of array  :"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target value :"<<endl;
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<i;
            chk=i;
            break;
        }
    }
    if(arr[chk]!=target){
        for(int i=0;i<n;i++){
            if(target<arr[0]){
                cout<<0;
                break;
            }
            else if(target>arr[n-1]){
                cout<<n;
                break;
            }
            else if(target>arr[i] && target<arr[i+1]){
                cout<<i+1;
            }
        }
    }
    return 0;
}
// To find position of element in sorted array