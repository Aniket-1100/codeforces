#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    int a = int(c);
    if(a>=48 && a<=57){
        cout<<"IS DIGIT"<<endl;
    }else if(a>=65 && a<=90){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }else if(a>=96 && a<=122){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
}