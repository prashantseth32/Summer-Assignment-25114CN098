#include<iostream>
using namespace std;
bool perfect(int n){
    int temp =n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
        else{
            continue;
        }
    }
    if(sum==temp){
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
    bool check=perfect(n);
    if(check==true){
        cout<<"number is perfect"<<endl;
    }
    else{
        cout<<"not perfect"<<endl;
    }
}