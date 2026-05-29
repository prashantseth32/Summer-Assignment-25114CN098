#include <iostream>
using namespace std;

void prime(int n){
    int i;
    for(i=0; i<=n; i++){
        if(n % i == 0){
            cout<<"The number is Prime";
        }
        else{
            cout<<"The number is not prime";
        }
    }
}

int main(){
    int n;
    cout<<"Enter the Number";
    cin>>n;
    prime(n);
}