#include<iostream>
using namespace std;
void common(int arr1[], int n1, int arr2[], int n2) {
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
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
    cout << "Common elements are: ";
    common(arr1, n1, arr2, n2);
    return 0;
}