#include <iostream>
using namespace std;
int main ()
{
    int max;
    int n;
    int arr[n];
    bool yes=true;  
    cout<<"Enter no of element : "<<endl; 
    cin>>n;
    cout<<"Elemrnts in array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
                
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<max){
            if(max>=2*arr[i]){
                yes=true;
            }
            else{
            yes=false;
            break;
            } }
        }
        if(yes==true){
            cout<<max;
        }
        else{
            cout<<-1;
        }
    }
    // If maximum is atleast twice that other all elements