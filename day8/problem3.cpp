#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    if(!(cin>>n)){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)('A'+j%26);
        }
        cout<<endl;
    }
    return 0;
}