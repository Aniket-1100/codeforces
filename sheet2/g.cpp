#include <iostream>
using namespace std;
long long factorial(long long a){
    if(a==0 || a==1){
        return 1;
    }
    return a*factorial(a-1);

}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        long long b=factorial(a);
        cout<<b<<endl;
    }
}