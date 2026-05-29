#include <iostream>
using namespace std;

void prime(int n1, int n2){
    int i;
    for(i=n1; i<n2; i++){

        bool isprime= true;

        for(int j=2; j<i; j++){

            if(i%j == 0){
                isprime = false;
                break;
            }

        }

        if(isprime){
            cout<<"The Prime numbers is:";
            cout<<i<<" " << endl;
        }
    }
}

int main(){
    int n1,n2;
    cout<<"Enter the Numbers in range greater than 2:"<<endl;
    cin>>n1;
    cin>>n2;
    prime(n1,n2);
    return 0;
}