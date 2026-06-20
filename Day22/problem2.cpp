#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            count++;
        }
    }
    cout<<"Total words = "<<count+1;
}