#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string inputString() {
    string str;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);
    return str;
}
void displayString(const string& str) {
    if(str.empty()) {
        cout << "String is Empty" << endl;
        return;
    }
    cout << "String: " << str << endl;
}

void findLength(const string& str) {
    if(str.empty()) {
        cout << "String is Empty" << endl;
        return;
    }
    cout << "Length of string: " << str.length() << endl;
}

void concatenateStrings() {
    string str1, str2;
    cout << "Enter first string: ";
    cin.ignore();
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    string result = str1 + str2;
    cout << "Concatenated string: " << result << endl;
}

void reverseString(string str) {
    if(str.empty()) {
        cout << "String is Empty" << endl;
        return;
    }
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
}

void checkPalindrome(const string& str) {
    if(str.empty()) {
        cout << "String is Empty" << endl;
        return;
    }
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev)
        cout << "String is Palindrome" << endl;
    else
        cout << "String is not Palindrome" << endl;
}

void countVowels(const string& str) {
    if(str.empty()) {
        cout << "String is Empty" << endl;
        return;
    }
    int vowels = 0;
    for(char c : str) {
        char ch = tolower(c);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
    }
    cout << "Number of vowels: " << vowels << endl;
}

void toUpperCase(string str) {
    if(str.empty()) {
        cout << "String is Empty" << endl;
        return;
    }
    for(char &c : str) {
        c = toupper(c);
    }
    cout << "Uppercase string: " << str << endl;
}

void toLowerCase(string str) {
    if(str.empty()) {
        cout << "String is Empty" << endl;
        return;
    }
    for(char &c : str) {
        c = tolower(c);
    }
    cout << "Lowercase string: " << str << endl;
}

void displayMenu() {
    cout << endl;
    cout << "===== STRING OPERATIONS =====" << endl;
    cout << "1. Input String" << endl;
    cout << "2. Display String" << endl;
    cout << "3. Find Length" << endl;
    cout << "4. Concatenate Strings" << endl;
    cout << "5. Reverse String" << endl;
    cout << "6. Check Palindrome" << endl;
    cout << "7. Count Vowels" << endl;
    cout << "8. Convert to Uppercase" << endl;
    cout << "9. Convert to Lowercase" << endl;
    cout << "10. Exit" << endl;
    cout << "Enter Choice: ";
}

int main() {
    string currentStr = "";
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                currentStr = inputString();
                cout << "String Input Successful" << endl;
                break;
            case 2:
                displayString(currentStr);
                break;
            case 3:
                findLength(currentStr);
                break;
            case 4:
                concatenateStrings();
                break;
            case 5:
                reverseString(currentStr);
                break;
            case 6:
                checkPalindrome(currentStr);
                break;
            case 7:
                countVowels(currentStr);
                break;
            case 8:
                toUpperCase(currentStr);
                break;
            case 9:
                toLowerCase(currentStr);
                break;
            case 10:
                cout << "Thank You" << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    } while(choice != 10);

    return 0;
}