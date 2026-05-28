#include <iostream>
using namespace std;

int sum(int n){
    int s = 0, i;

    for(i = 0; i <= n; i++){
        s = s + i;
    }

    return s;
}

int main(){

    int n;

    cout << "Enter the Value: ";
    cin >> n;

    int answer = sum(n);

    cout << "Sum: " << answer;

}