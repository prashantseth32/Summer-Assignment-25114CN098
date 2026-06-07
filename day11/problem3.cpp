#include <iostream>
using namespace std;
bool prime(int n){
    bool checkprime=true;
    if(n==2){
        return checkprime;

    }
    if(n<=1){
        checkprime=false;
        return checkprime;
        
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                checkprime=false;
                return checkprime;
            }
            
        }
        return checkprime;
    }
    
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int check=prime(n);
    if (check==true){
        cout<<"number is prime"<<endl;
    }
    else{
        cout<<"number is not prime"<<endl;
    }

}