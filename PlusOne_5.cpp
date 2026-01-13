#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num=0;
    for(int i=0;i<n;i++){
        num=(num*10)+arr[i];
    }
    num+=1;
    string str=to_string(num);
    for(int i=0;i<n;i++){
        cout<<str[i];
        
        }
        if(arr[n-1]>8){
            cout<<0;
    }
    cout<<endl;
    return 0;
}
// plus one