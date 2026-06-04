#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    if(!(cin>>n)){
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}