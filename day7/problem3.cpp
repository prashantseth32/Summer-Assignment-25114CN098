#include <iostream>
using namespace std;

int digit(int n){
    if(n==0) return 0;
    else{
        return ((n%10) + digit(n/10));
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int result=digit(n);
    cout<<"Sum of digits: "<<result<<endl;

    return 0;
}