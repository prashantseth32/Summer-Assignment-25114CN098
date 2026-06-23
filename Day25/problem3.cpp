#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of names"<<endl;
    cin>>n;
    string name[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,name[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(name[i]>name[j]){
                swap(name[i],name[j]);
            }
        }
    }
    cout<<"sorted Names"<<endl;
    for(int i=0;i<n;i++){
        cout<<name[i]<<endl;
    }
    return 0;
}