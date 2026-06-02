#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int b=0;
    int place=1;
    while(n>0){
        int c=n%2;
        b=b+c*place;
        place=place*10;
        n=n/2;
    }
    cout<<b;

}