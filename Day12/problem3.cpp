#include <iostream>
using namespace std;

void fibonacci(int n){
    int r,n1,n2;
    n1=0;
    n2=1;
    
       for(int i=1; i<=n; i++){
            cout<<n1<<" ";
            r = n1+n2;
            n1=n2;
            n2=r; 
       }
    
    
    
}

int main(){
    int n;
    cout<<"Enter the Number to generate fibonacci series:" << endl;
    cin>>n;
    fibonacci(n);
    return 0;

}