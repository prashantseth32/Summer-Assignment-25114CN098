#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int maxcount=0;
    char ans;
    for(int i=0;i<s.size();i++){
        int count=0;
        for(int j=0;j<s.size();j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            ans=s[i];
        }
    }
    cout<<"maximum occurring character = "<<ans<<endl;
    cout<<"frequency = "<<maxcount;
}