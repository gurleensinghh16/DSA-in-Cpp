#include <iostream>
using namespace std;
int main ()
{
    vector<int> arr={1,2,2,1,1,0};
    int count=0;
    cout<<"Elements in array are : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==0) continue;
            if(arr[i]==arr[i+1]){
                arr[i]*=2;
                arr[i+1]=0;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count++;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                arr.erase(arr.begin()+i);
                i--;
            }
        }
        for(int i=0;i<count;i++){
            arr.push_back(0);
        }
        cout<<endl<<"Ordered array is : ";
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}
// Apply operations on an array :