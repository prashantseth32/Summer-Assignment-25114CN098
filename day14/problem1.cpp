#include <iostream>
using namespace std;
int search(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i+1;
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element to be serach"<<endl;
    cin>>k;
    int s= search(arr,n,k); 
    cout<<"index of element is"<<s<<endl;
}