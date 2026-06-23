#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"enter first string"<<endl;
    getline(cin,s1);
    cout<<"enter second string"<<endl;
    getline(cin,s2);
    cout<<"common Characters : ";
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s2.length();j++){
            if(s1[i]==s2[j]){
                cout<<s1[i]<<" ";
                break;
            }
        }
    }

    return 0;
}