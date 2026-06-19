#include<iostream>
#include <string.h>
using namespace std;
int counti(string s){
    int count =0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    int c=counti(s);
    cout<<"length is"<<" "<<c<<endl;

}