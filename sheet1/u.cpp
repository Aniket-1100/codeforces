#include <iostream>
using namespace std;
int main(){
    double a;
    cin>>a;
    int b=int(a);
    if(b==a){
        cout<<"int "<<b<<endl;
    }else{
        float c=a-b;
        cout<<"float "<<b<<" "<<c<<endl;
    }
}