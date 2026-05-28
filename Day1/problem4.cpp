#include <iostream>
using namespace std;
int count(int n){
    int d = 0;
    while(n>0){
        n=n/10;
        d++;
    }
    return d;
}

int main(){
    int n;
    cout<<"Enter the the number to count digits:";
    cin>>n;
    int answer = count(n);
    cout << "the number of digits in" << " " << n << " " << "is" << " "<< answer << endl;
    return 0;
}