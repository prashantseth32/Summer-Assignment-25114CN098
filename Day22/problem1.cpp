#include<iostream>
#include<string>
using namespace std;
char tolowercase(char l){
    if(l>='A' &&l<='Z'){
        l=l-'A'+'a';
    }
    return l;
}
string rev(string s,int len){
    int start=0;
    int end=len;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;

    }
    return s;
}
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    string temp=s;
    int len=s.size()-1;
    for(int i=0;i<s.size();i++){
        s[i]=tolowercase(s[i]);
        temp[i]=tolowercase(temp[i]);    }
    if(rev(s,len)==temp){
        cout<<"It is palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }


}