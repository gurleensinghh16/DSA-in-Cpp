#include <iostream>
using namespace std;
int main ()
{
    vector <char> s={'h','e','l','l','o'};
    char temp;
    int i=0;
    int j=s.size()-1;
    
    while(i<=j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
// Reverse the given string without using extra string :