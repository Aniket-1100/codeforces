#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            pos++;
        }else if(arr[i] < 0){
            neg++;
        }else{
            continue;
        }
    }
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    
}