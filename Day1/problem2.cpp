#include <iostream>
using namespace std;
void table(int n){
    int i;
    for(i=0;i<=10;i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
    
}

int main(){
    int n;
    cout<<"Enter the number to find Table:";
    cin>>n;
    table(n);
    return 0;
}