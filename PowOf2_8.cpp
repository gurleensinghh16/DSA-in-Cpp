#include <iostream>
using namespace std;
int main ()
{
    int n;
    long x=2;
    bool st;
    cout<<"Enter the number you want to check power of 2 or not :\n";
    cin>>n;
    if(n==1){
        st=true;
        cout<<st;
        return 0;
    }
    while(x<=INT_MAX){
        if(n==x){
            st=true;
            cout<<st;
            return 0;
        }
        x=x*2;
    }
    st=false;
    cout<<st;
    return 0;
}
// Check number is power of 2 or not return boolean