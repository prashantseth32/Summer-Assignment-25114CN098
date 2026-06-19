#include<iostream>
#include<string.h>
using namespace std;
string lower(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]-'A'+'a';
        }
    }
    return s;
}
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    string c=lower(s);
    int vowel=0;
    int conostant=0;
    for(int i=0;i<c.length();i++){
        if(c[i]==' '){
            continue;
        }
        else if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
            vowel++;
        }
        else{
            conostant++;
        }
    }
    cout<<"count of vowel is"<<vowel<<endl;
    cout<<"count of conostant is"<<conostant<<endl;

   
}