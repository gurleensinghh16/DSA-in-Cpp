#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    bool st=false;
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements inside the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
     int chk=0;
       for(int i=0;i<n;i++){
        if(i!=arr[i]){
            cout<<i;
            st=true;
            break;
        }
        chk=i;
       }
      if(st==false) cout<<chk+1;
    return 0;
}
// Find missing element :