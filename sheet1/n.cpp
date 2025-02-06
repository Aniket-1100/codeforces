#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    int a=int(c);
    if(a>=65 && a<=90){
        a=a+32;
    }else if(a>=96 && a<=122){
        a=a-32;
    }
    char b = char(a);
    cout<<b<<endl;

}