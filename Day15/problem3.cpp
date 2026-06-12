#include<iostream>
using namespace std;
int rotateright(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}
int main(){
    int n;
    cout<<"enter the range"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateright(arr,n);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}