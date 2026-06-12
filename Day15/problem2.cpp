#include<iostream>
using namespace std;
int rotateleft(int arr[],int n){
    int r;
    cout<<"how many times left shift"<<endl;
    cin>>r;
    while(r>0){
        int first=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=first;
        r--;
    }
    
    

  
}
   

int main(){
    int n;
    cout<<"enter the range"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateleft(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}