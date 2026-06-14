#include<iostream>
#include<climits>
using namespace std;
int maxfrequency(int arr[],int n){
    int max=INT_MIN;
    int ans;
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            ans=arr[i];

        }
    }
    return ans;
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

    int m=maxfrequency(arr,n);
    cout<<"maxium occurance element is"<<m<<endl;

}