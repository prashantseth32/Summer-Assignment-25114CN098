#include<iostream>
using namespace std;
bool palindrome(int n){
    int temp=n;
    int c=0;
    while(n>0){
        int b=n%10;
        c=c*10+b;
        n=n/10;
    }
    if(c==temp){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    bool check=palindrome(n);
    if(check==true){
        cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
}