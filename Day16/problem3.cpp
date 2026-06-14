#include<iostream>
using namespace std;

void pairsum(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

int main(){
    int n;
    cout << "enter the range" << endl;
    cin >> n;

    int arr[n];

    cout << "enter the elements" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "enter the sum" << endl;
    cin >> target;

    pairsum(arr, n, target);
}