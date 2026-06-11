#include<iostream>
using namespace std;
void second(int arr[],int n){
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
int main(){
    int n;
    cout<<"enter the range of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elemnets"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    second(arr,n);
    cout<<"second largest element is"<<arr[n-2]<<endl;

}