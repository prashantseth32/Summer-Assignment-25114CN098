# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number needed to be check"<<endl;
    cin>>n;
    int temp1=n;
    int sum=0;
    while(n>0){
        int b=n%10;
        int f=1;
        for(int i=1;i<=b;i++){
            f=f*i;

        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==temp1){
        cout<<"number is strong number"<<endl;
    }
    else{
        cout<<"number is not strong number"<<endl;
    }
}