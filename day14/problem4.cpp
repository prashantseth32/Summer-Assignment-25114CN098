#include<iostream>
using namespace std;
void sorted(int arr[],int n){
   for(int i=0; i<n-1; i++){
    int k = i;

    for(int j=i+1; j<n; j++){
        if(arr[j] < arr[k]){
            k = j;
        }
    }

    swap(arr[i], arr[k]);
    }


}
void duplicate(int arr[],int n){
    cout<<"repeated element is"<<endl;
    for(int i=0,j=1;j<n;i++,j++){
        if(arr[i]==arr[j]){
            cout<<arr[i]<<endl;


        }

    }
}
int main(){
    int n;
    cout<<"enter the range of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elemnets"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorted(arr,n);
    duplicate(arr,n);
}