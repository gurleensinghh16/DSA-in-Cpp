#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the elemnt : "<<endl;
    cin>>n;
    long i=1,sq=1;
    if(n==0){
        cout<<0;
    }
    while(true){
        sq=i*i;
        if(sq==n){
            cout<<i;
            return 0;
        }
        else if(sq>n){
            cout<<i-1;
            return 0;
        }
        i++;
    }
    return 0;
}
// To print round off of square root