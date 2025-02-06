#include <iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    int count=0;
    for(int i=1;i<=a;i++){
        if(i%2==0){
            cout<<i<<endl;
            count++;
        }
    }
    if(count==0){
        cout<<"-1"<<endl;
    }
}