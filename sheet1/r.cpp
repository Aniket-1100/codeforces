#include <iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    cout<<a/365<<" years"<<endl;
    int b=a%365;
    cout<<b/30<<" months"<<endl;
    int c=b%30;
    cout<<c<<" days"<<endl;
}
