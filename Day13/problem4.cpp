#include<iostream>
using namespace std;
int even (int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            c++;
            
        }
        
    }
    return c;
}
int odd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
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
    int e=even(arr,n);
    int o=odd(arr,n);
    cout<<"count of even"<<"="<<e<<endl;
    cout<<"count of odd"<<"="<<o<<endl;

} 