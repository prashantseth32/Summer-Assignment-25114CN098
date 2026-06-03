#include <iostream>
using namespace std;

int fibonaci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return (fibonaci(n-1)+fibonaci(n-2));
    }
}

int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibonaci(i)<<" ,";
    }
    cout<<endl;

    return 0;
}