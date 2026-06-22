#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    string ans="";
    for(int i=0;i<s.length();i++){
        bool found=false;
        for(int j=0;j<ans.length();j++){
            if(s[i]==ans[j]){
                found=true;
                break;
            }
        }
        if(found==false){
            ans=ans+s[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}