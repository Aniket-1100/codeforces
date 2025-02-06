#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int x=1;
    for(int i=1;i<=a;i++){
        cout<<x<<" "<<x+1<<" "<<x+2<<" "<<"PUM"<<endl;
        x+=4;
    }
}