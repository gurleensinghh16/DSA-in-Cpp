#include <iostream>
using namespace std;
int main ()
{
    int n;
    int mod;
    double sum;
    cout<<"Enter the number to reverse : "<<endl;
    cin>>n;
    while(n!=0){
        mod=n%10;
        n=n/10;
        sum=(sum*10)+mod;
    }
    if(sum>INT_MAX || sum<INT_MIN){
        cout<<0<<endl;
    }
    cout<<sum;
    return 0;
}
// print reverse of the number :