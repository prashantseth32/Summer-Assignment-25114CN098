#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    char ch;
    cout<<"Enter character : ";
    cin>>ch;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            count++;
        }
    }
    cout<<"Frequency = "<<count;
}