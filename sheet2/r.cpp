#include <iostream>
using namespace std;
int main(){
    int a,b;
    int sum;
    while(true){
        sum=0;
        cin>>a>>b;
        if(a<=0 || b<=0){
            break;
        }
        else if(a>b){
            for(int i=b;i<=a;i++){
                cout<<i<<" ";
                sum+=i;
            }
        }
        else{
            for(int i=a;i<=b;i++){
                cout<<i<<" ";
                sum+=i;
            }
        }
        cout<<"sum ="<<sum<<endl;
    }
}