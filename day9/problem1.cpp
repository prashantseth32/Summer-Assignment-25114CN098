#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row and coulumn "<<endl;
    cin>>n;
    for(int i=n;i>0;i--){
       for(int j=i;j>0;j--){
        cout<<"*";
       }
       cout<<endl;
    }

}