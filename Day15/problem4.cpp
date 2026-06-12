#include<iostream>
using namespace std;
int zeroshift(int arr[],int n){
   int nonzero=0;
   for(int j=0;j<n;j++){
      if(arr[j]!=0){
        swap(arr[j],arr[nonzero]);
        nonzero++;
      }

   }


   
    
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
    zeroshift(arr,n);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

}