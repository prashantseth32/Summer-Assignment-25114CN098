#include <iostream>
#include <math.h>
using namespace std;
void amstrong(int n){
    int n1,n2,d,r,s,t;
    n1=n;
    n2=n;
    s = 0;
    t = 0;
    d = 0;
    while(n>0){
        n=n/10;
        d++;
    }
    while(n1>0){
        r=n1%10;
       int power = 1;

        for(int i = 1; i <= d; i++){
            power = power * r;
        }

        s = s + power;

        n1 = n1 / 10;
    }

    if(s==n2){
       cout<<"Given Number Is Amstrong Number";
    }
    else{
        cout<<"Given Number Is Not a Amstrong Number";
    }
}

int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    amstrong(n);

}