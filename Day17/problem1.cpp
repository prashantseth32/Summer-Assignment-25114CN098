#include<iostream>
using namespace std;
void merge(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    int k = 0;
    for(int i = 0; i < n1; i++) {
        arr3[k] = arr1[i];
        k++;
    }
    for(int i = 0; i < n2; i++) {
        arr3[k] = arr2[i];
        k++;
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
    int arr3[n1 + n2];
    merge(arr1, n1, arr2, n2, arr3);
    cout << "Merged array: ";
    for(int i = 0; i < n1 + n2; i++) {
        cout << arr3[i] << " ";
    }
    return 0;
}