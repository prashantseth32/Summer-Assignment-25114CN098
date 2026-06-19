#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the stringh"<<endl;
    getline(cin,s);
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;

    }
    cout<<"reverse string is"<<endl;
    cout<<s;
    
}