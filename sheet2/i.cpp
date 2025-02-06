#include <iostream>
using namespace std;
int main(){
    long long a;
    long long num=0;
    cin>>a;
    long long b=a;
    while(b>0){
        int digit=b%10;
        num=num*10+digit;
        b/=10;
    }
    if(a==num){
        cout<<a<<endl;
        cout<<"YES"<<endl;
    }else{
        cout<<num<<endl;
        cout<<"NO"<<endl;
    }
}