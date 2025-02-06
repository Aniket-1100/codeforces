#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int i=1;
    int max=0;
    while(i<=a && i<=b){
        if(a%i==0 && b%i==0 && max<i){
            max=i;
        }
        i++;
    }
    cout<<max;

}