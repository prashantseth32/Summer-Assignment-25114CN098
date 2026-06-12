#include<iostream>
using namespace std;
int reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return 0;
}
int main(){
    int n;
    cout<<"entr the range "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    reverse(arr,n);
    cout<<"reverse array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}