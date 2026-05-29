#include <iostream>
using namespace std;
int sum(int n){
    int d,r=1;
    while(n>0){
        d=n%10;
        r=r*d;
        n=n/10;
        d++;

    }
    return r;

}

int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int answer = sum(n);
    cout<<"The Product of Digits of"<<" "<< n <<  " " << "is" << " " << answer << endl;
}