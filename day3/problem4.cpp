#include <iostream>
using namespace std;

void LCM(int n1,int n2){
    int r,lcm,gcd,n3,n4;
    n3=n1;
    n4=n2;
    
    //We know LCM(n1,n2)xGCD(n1,n2)=n1xn2

   //Finding GCD
       while(n4!=0){
            r = n3 % n4;
            n3 = n4;
            n4 = r;
            
       }
       gcd = n3;

    //Finding LCM

    lcm= (n1*n2)/gcd;

    cout<<"THE LCM OF GIVEN NUMBERS IS:"<<lcm;
    
}

int main(){
    int n1, n2;
    cout<<"Enter the Two Numbers:" << endl;
    cin>>n1>>n2;
     LCM(n1,n2);
     return 0;

}