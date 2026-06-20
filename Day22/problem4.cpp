#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            ans=ans+s[i];
        }
    }
    cout<<ans;
}