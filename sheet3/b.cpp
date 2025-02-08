#include <iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    long long arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    long long key;
    cin>>key;
    bool flag=false;
    for(int i=0;i<a;i++){
        if(arr[i]==key){
            cout<<i;
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"-1";
    }
}