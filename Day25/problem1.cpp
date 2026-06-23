#include<iostream>
using namespace std;
void sortedmerge(int a[],int b[],int merge[],int n1,int n2,int size){
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            merge[k]=a[i];
            i++;
            k++;
        }
        else{
            merge[k]=b[j];
            j++;
            k++;
        }
        
    }
    while(i<n1){
        merge[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        merge[k]=b[j];
        j++;
        k++;
    }

}
int main(){
    int n1,n2;
    cout<<"enter the size of first array"<<endl;
    cin>>n1;
    cout<<"enter the size of second array"<<endl;
    cin>>n2;
    int a[n1];
    int b[n2];
    int size=n1+n2;
    int merge[size];
    cout<<"enter the first array element"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    } 
    cout<<"enter the second array element"<<endl;
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    sortedmerge(a,b,merge,n1,n2,size);
    for(int i=0;i<size;i++){
        cout<<merge[i]<<" ";
    }


}