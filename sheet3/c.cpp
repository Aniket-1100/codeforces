#include <iostream>
using namespace std;
void replace(long long arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr[i]=1;
        }else if(arr[i]<0){
            arr[i]=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    replace(arr,n);

}