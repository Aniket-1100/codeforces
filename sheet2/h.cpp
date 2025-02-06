#include <iostream>
using namespace std;
void checkPrime(long long a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int main(){
    long long a;
    cin>>a;
    checkPrime(a);
}