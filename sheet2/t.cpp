#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=count;k++){
            cout<<"*";
        }
        cout<<endl;
        count+=2;
    }
}