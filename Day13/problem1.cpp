#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    cout<<"elements are "<<endl;
    for(int j=0;j<n;j++){
        cout<<" "<<arr[j];
    }
}