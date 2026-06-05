#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows and column"<<endl;
    cin>>n;
    for(char i='A';i<='A'+n;i++){
        for(char j='A';j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}