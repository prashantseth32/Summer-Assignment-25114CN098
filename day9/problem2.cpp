#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row and column"<<endl;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;

    }
}