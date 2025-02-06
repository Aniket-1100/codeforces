#include<iostream>
using namespace std;
int main(){
    int a;
    while(true){
        int x=1999;
        cin>>a;
        if(a>999&&a<=9999){
            if(a==x){
                cout<<"Correct";
                return 0;
            }else{
                cout<<"Wrong"<<endl;
            }
        }
        else return 0;
    }

}