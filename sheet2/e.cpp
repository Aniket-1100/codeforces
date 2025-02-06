#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    long long arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<a;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}