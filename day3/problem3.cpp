#include <iostream>
using namespace std;

void GCD(int n1,int n2){
    int r;
   
       while(n2!=0){
            r = n1 % n2;
            n1 = n2;
            n2 = r;
            
       }
    
    
    cout<<"THE GCD OF GIVEN NUMBERS IS:"<<n1;
    
}

int main(){
    int n1, n2;
    cout<<"Enter the Two Numbers:" << endl;
    cin>>n1>>n2;
     GCD(n1,n2);
     return 0;

}