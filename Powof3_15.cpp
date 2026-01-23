#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number you want to check : "<<endl;
    cin>>n;
     long sq=3;
     bool bol;
        while(sq<INT_MAX){
            if(n==1){
             bol=true;
             break;
            }    
            if(n==sq){
                 bol=true;
            break;
            }
            sq*=3;
            if(sq>n){
                bol=false;
                break;
            }
        }
        cout<<bol;
    return 0;
}
// Check int is power of 3 or not :