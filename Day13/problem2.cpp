#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int average(int arr[],int n,int s){
    int avg;
    avg=s/n;
    return avg;
}
int main(){
    int n;
    cout<<"enter the range"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=sum(arr,n);
    int avg=average(arr,n,s);
    cout<<"sum"<<"="<<s<<endl;
    cout<<"avg"<<"="<<avg<<endl;

}