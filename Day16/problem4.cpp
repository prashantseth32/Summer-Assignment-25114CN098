#include<iostream>
using namespace std;

int removeduplicate(int arr[], int n){
    if(n == 0){
        return 0;
    }

    int i = 0;

    for(int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main(){
    int n;
    cout<<"enter the range"<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter the elements in sorted order"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int size = removeduplicate(arr,n);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}