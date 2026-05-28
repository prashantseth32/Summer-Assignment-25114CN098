#include <iostream>
using namespace std;
int fact(int n){
    int c=1,i;
    for(i=1;i<=n;i++){
        c=c*i;
    }
    return c;
}

int main(){
    int n;
    cout<<"Enter the Number for Factorial:";
    cin>>n;
    int answer = fact(n);
    cout<<"Factorial:"<< answer;
    return 0;
}