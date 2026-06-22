#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    string word="";
    string longest="";
    for(int i=0;i<=s.length();i++){
        if(s[i]==' ' || s[i]=='\0'){
            if(word.length()>longest.length()){
                longest=word;
            }
            word="";
        }
        else{
            word=word+s[i];
        }
    }
    cout<<longest<<endl;
    return 0;
}