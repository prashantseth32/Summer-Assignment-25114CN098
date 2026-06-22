#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"enter the string1"<<endl;
    cin>>s1;
    cout<<"enter the string2"<<endl;
    cin>>s2;
    string temp=s1+s1;
    if(temp.find(s2)!=string::npos){
        cout<<"rotate"<<endl;
    }
    else{
        cout<<"not rotate"<<endl;
    }
    return 0;
}