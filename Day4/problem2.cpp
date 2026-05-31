#include <iostream>
using namespace std;

void fibo(int n){
    int r,n1,n2;
    n1=0;
    n2=1;
    int term = 0;
    for(int i = 1; i <= n; i++){
        cout << n1 << " ";
        if(i == n){
             term = n1;
        }
        r = n1 + n2;
        n1 = n2;
        n2 = r;
       
    }
    cout << endl << "The given term is: " << term << endl;
    
    
}

int main(){
    int n;
    cout<<"Enter the term to find:" << endl;
    cin>>n;
     fibo(n);
     return 0;

}