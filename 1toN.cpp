#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
     int sum=0;
        for(int i=0;i<=n;i++){
            if(i%3==0 || i%5==0 || i%7==0 ){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    return 0;
}
// 1 to n sum :
// Question no. 2652