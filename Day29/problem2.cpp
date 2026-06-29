#include <iostream>
#include <vector>
using namespace std;
vector<int> inputArr() {
    int n;
    cout << "Enter Number of Elements: ";
    cin >> n;
    vector<int> arr;
    int num;
    cout << "Enter Array Elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }
    return arr;
}

void displayArray(const vector<int>& arr) {
    if(arr.empty()) {
        cout << "Array is Empty" << endl;
        return;
    }
    cout << "Array Elements: ";
    for(int x : arr)
        cout << x << " ";
    cout << endl;
}

void searchElement(const vector<int>& arr) {
    if(arr.empty()) {
        cout << "Array is Empty" << endl;
        return;
    }
    int key;
    bool found = false;
    cout << "Enter Element to Search: ";
    cin >> key;
    for(size_t i = 0; i < arr.size(); i++) {
        if(arr[i] == key) {
            cout << "Element Found at Position " << i + 1 << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Element Not Found" << endl;
}

void sortArray(vector<int>& arr) {
    if(arr.empty()) {
        cout << "Array is Empty" << endl;
        return;
    }
    for(size_t i = 0; i < arr.size() - 1; i++) {
        for(size_t j = 0; j < arr.size() - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array Sorted Successfully" << endl;
}

void reverseArray(vector<int>& arr) {
    if(arr.empty()) {
        cout << "Array is Empty" << endl;
        return;
    }
    int start = 0;
    int end = arr.size() - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "Array Reversed Successfully" << endl;
}

void calculateSum(const vector<int>& arr) {
    if(arr.empty()) {
        cout << "Array is Empty" << endl;
        return;
    }
    int sum = 0;
    for(int x : arr)
        sum += x;
    cout << "Sum = " << sum << endl;
}

void deleteElement(vector<int>& arr) {
    if(arr.empty()) {
        cout << "Array is Empty" << endl;
        return;
    }
    int key;
    bool found = false;
    cout << "Enter Element to Delete: ";
    cin >> key;
    for(size_t i = 0; i < arr.size(); i++) {
        if(arr[i] == key) {
            arr.erase(arr.begin() + i);
            found = true;
            cout << "Element Deleted Successfully" << endl;
            break;
        }
    }
    if(!found)
        cout << "Element Not Found" << endl;
}

void displayMenu() {
    cout << endl;
    cout << "===== ARRAY OPERATIONS =====" << endl;
    cout << "1. Input Array" << endl;
    cout << "2. Display Array" << endl;
    cout << "3. Search Element" << endl;
    cout << "4. Sort Array" << endl;
    cout << "5. Reverse Array" << endl;
    cout << "6. Calculate Sum" << endl;
    cout << "7. Delete Element" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter Choice: ";
}
int main() {
    vector<int> arr;
    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                arr = inputArr();
                cout << "Array Input Successful" << endl;
                break;
            case 2:
                displayArray(arr);
                break;
            case 3:
                searchElement(arr);
                break;
            case 4:
                sortArray(arr);
                break;
            case 5:
                reverseArray(arr);
                break;
            case 6:
                calculateSum(arr);
                break;
            case 7:
                deleteElement(arr);
                break;
            case 8:
                cout << "Thank You" << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    } while(choice != 8);

    return 0;
}