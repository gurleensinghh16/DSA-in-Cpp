#include <iostream>
using namespace std;
int main ()
{
    int num,sum=0,sum2=0;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    while(num>0){
        sum+=num%10;
        num=num/10;
    }
    cout<<"1st sum is : "<<sum<<endl;
    while(sum>0){
        sum2+=sum%10;
        sum=sum/10;
    }
    cout<<"Sum is : "<<sum2<<endl;
    return 0;
}
// Repeatedly add all digits until 1 digit left :
// leetcode question 258.
