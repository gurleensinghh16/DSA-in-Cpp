#include <iostream>
using namespace std;
int main ()
{
    bool bol=true;
    int n;
    cout<<"Enter the integer you want to check :"<<endl;
    cin>>n;
    string s=to_string(n); // convert integer into string
    int i=0,j=s.size()-1;
    while(i<j){ 
        if(s[i]!=s[j]){ //if any element not equal imediatly stops
            bol=false;
            break;
        }
        i++;
        j--;
    }
    cout<<bol<<endl;
    return 0;
}