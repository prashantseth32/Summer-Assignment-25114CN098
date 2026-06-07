#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int fact=factorial(n);
    cout<<"factorial of number is"<<" "<< fact<<endl;
}