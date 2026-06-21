#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"enter the string1"<<endl;
    getline(cin,s1);
    cout<<"enter the string2"<<endl;
    getline(cin,s2);
    if(s1.size()!=s2.size()){
        cout<<"Not Anagram";
        return 0;
    }
    for(int i=0;i<s1.size();i++){
        int count1=0;
        int count2=0;
        for(int j=0;j<s1.size();j++){
            if(s1[i]==s1[j]){
                count1++;
            }
        }
        for(int j=0;j<s2.size();j++){
            if(s1[i]==s2[j]){
                count2++;
            }
        }
        if(count1!=count2){
            cout<<"not Anagram";
            return 0;
        }
    }
    cout<<"anagram";
}