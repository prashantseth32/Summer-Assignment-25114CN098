#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int number=rand()%50+1;
    int guessednumber;
    cout<<"enter the gussed number"<<endl;
    cin>>guessednumber;
    while(guessednumber !=number){
        if(guessednumber>number){
            cout<<"Guessed number is greater than true number "<<endl;
            
        }
        else {
            cout<<"Guessed number is less than true number "<<endl;
            
        }
        cout<<"Try again"<<" ";
        cin>>guessednumber;
    }
    cout<<"You have coorectely guessed the number"<<endl;
}
 

