#include <iostream>
using namespace std;
int main ()
{
    int n,mul=1,add=0;
    cout<<"Enter the number : ";
    cin>>n;
    string st=to_string(n);
    for(int i=0;i<st.size();i++){
        mul*=(st[i]-'0');
        add+=(st[i]-'0');
    }
    cout<<mul-add;
    return 0;
}
// Subtract the multiple and sum of int