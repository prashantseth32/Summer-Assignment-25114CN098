#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-'a'+'A';
        }
    }
    cout<<s;

}