# include<iostream>
using namespace std;
int missing(int arr[],int n){
    int actualsum=(n*(n+1))/2;
    int tempsum=0;
    for(int i=0;i<n-1;i++){
        tempsum+=arr[i];
    }
    int missingnumber=actualsum-tempsum;
    return missingnumber;
}
int main(){
    int n;
    cout<<"entr the range "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element"<<endl;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int m=missing(arr,n);
    cout<<"missing number is"<<m<<endl;
}