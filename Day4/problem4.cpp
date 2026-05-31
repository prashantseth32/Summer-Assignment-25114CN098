#include <iostream>
using namespace std;

void amstr(int start , int end){

    for(int i = start; i <= end; i++){

        int n, n1, n2, d, r, s;

        n1 = n2 = n = i;

        s = 0;
        d = 0;

        
        while(n > 0){
            n = n / 10;
            d++;
        }

        
        while(n1 > 0){

            r = n1 % 10;

            int power = 1;

            for(int j = 1; j <= d; j++){
                power = power * r;
            }

            s = s + power;

            n1 = n1 / 10;
        }

       
        if(s == n2){
            cout << n2 << " ";
        }
    }
}

int main(){

    int start, end;

    cout << "Enter the range: ";
    cin >> start >> end;

    amstr(start, end);
}