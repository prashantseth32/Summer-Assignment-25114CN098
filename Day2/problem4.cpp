#include <iostream>
using namespace std;

int rev(int n){
    int d, r=0;
    while(n>0){
        d = n % 10;
        r = r*10 + d;
        n = n/10;
        d++;
    }
    return r;
}

int main(){
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    int answer = rev(n);
    if(answer == n){
        cout<<"The Number is palindrome";
    }
    else{
        cout<<"The Number is Not palimdrome";
    }
    return 0;
    
}
