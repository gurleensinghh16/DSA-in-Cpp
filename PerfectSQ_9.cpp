#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number to check prfct square : "<<endl;
    cin>>n;
    bool bolean=false;
    double i=1,sq=0;
    while(sq<INT_MAX){
        sq=i*i;
        if(sq==n){
            bolean=true;
            break;
        }
        i++;
    }
    cout<<bolean;
    
    return 0;
}
// Return true  if Number is perfect square else false