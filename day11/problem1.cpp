# include<iostream>
using namespace std;
int sum(int a,int b){
    int sum;
    sum=a+b;
    return sum;

}
int main(){
    int a,b;
    cout<<"enter the first number "<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    int c;
    c=sum(a,b);
    cout<<"sum of number is "<<" "<<c;

}