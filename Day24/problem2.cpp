#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    string ans="";
    for(int i=0;i<s.length();i++){
        int count=1;
        while(i<s.length()-1 && s[i]==s[i+1]){
            count++;
            i++;
        }
        ans=ans+s[i];
        ans=ans+to_string(count);
    }
    cout<<ans<<endl;
    return 0;
}