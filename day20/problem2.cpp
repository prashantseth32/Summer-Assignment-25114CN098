#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    bool symmetric = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(a[i][j] != a[j][i]){
                symmetric = false;
            }

        }
    }
    if(symmetric){
        cout<<"symmetric Matrix";
    }
    else{
        cout<<"not Symmetric Matrix";
    }

    return 0;
}