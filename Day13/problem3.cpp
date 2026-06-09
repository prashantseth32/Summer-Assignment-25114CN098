#include<iostream>
using namespace std;
int largest(int arr[],int n){
    int l=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>l){
            l=arr[i];
        }
    }
    return l;
}
int smallest(int arr[],int n){
    int s=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<s){
            s=arr[i];
        }
    }
    return s;
}
int main(){
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=largest(arr,n);
    int s= smallest(arr,n);
    cout<<"largest element"<<"="<<l<<endl;
    cout<<"smallest element"<<"="<<s<<endl;

}