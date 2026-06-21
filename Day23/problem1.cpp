#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        int count=0;
        for(int j=0;j<s.size();j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count==1){
            cout<<"first non-repeating character = "<<s[i];
            return 0;
        }
    }
    cout<<"no non-repeating character found";
}