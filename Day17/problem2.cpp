#include<iostream>
using namespace std;
void unionarray(int arr1[], int n1, int arr2[], int n2) {
    for(int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    for(int i = 0; i < n2; i++) {
        bool found = false;
        for(int j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if(found == false) {
            cout << arr2[i] << " ";
        }
    }
}
int main() {
    int n1, n2;
    cout << "Enter size of first array" << endl;
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array" << endl;
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter size of second array" << endl;
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array" << endl;
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    cout << "Union of arrays: ";
    unionarray(arr1, n1, arr2, n2);
    return 0;
}