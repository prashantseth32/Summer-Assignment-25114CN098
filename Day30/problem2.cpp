#include <iostream>
#include <string>
using namespace std;
const int MAX_BOOKS = 50;
string titles[MAX_BOOKS];
string authors[MAX_BOOKS];
int bookIds[MAX_BOOKS];
int quantities[MAX_BOOKS];
int borrowed[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if(bookCount >= MAX_BOOKS) {
        cout << "Library is Full" << endl;
        return;
    }
    bookIds[bookCount] = bookCount + 1;
    cout << "Enter Book Title: ";
    cin.ignore();
    getline(cin, titles[bookCount]);
    cout << "Enter Author Name: ";
    getline(cin, authors[bookCount]);
    cout << "Enter Quantity: ";
    cin >> quantities[bookCount];
    borrowed[bookCount] = 0;
    bookCount++;
    cout << "Book Added Successfully" << endl;
}

void displayBooks() {
    if(bookCount == 0) {
        cout << "No Books in Library" << endl;
        return;
    }
    cout << "\n--- Library Books ---" << endl;
    for(int i = 0; i < bookCount; i++) {
        cout << "ID: " << bookIds[i] 
             << " | Title: " << titles[i] 
             << " | Author: " << authors[i] 
             << " | Available: " << (quantities[i] - borrowed[i]) 
             << "/" << quantities[i] << endl;
    }
}

void searchBook() {
    if(bookCount == 0) {
        cout << "No Books in Library" << endl;
        return;
    }
    string title;
    cout << "Enter Book Title to Search: ";
    cin.ignore();
    getline(cin, title);
    bool found = false;
    for(int i = 0; i < bookCount; i++) {
        if(titles[i] == title) {
            cout << "Book Found:" << endl;
            cout << "ID: " << bookIds[i] << endl;
            cout << "Title: " << titles[i] << endl;
            cout << "Author: " << authors[i] << endl;
            cout << "Available: " << (quantities[i] - borrowed[i]) << "/" << quantities[i] << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Book Not Found" << endl;
}

void issueBook() {
    if(bookCount == 0) {
        cout << "No Books in Library" << endl;
        return;
    }
    int id;
    cout << "Enter Book ID to Issue: ";
    cin >> id;
    for(int i = 0; i < bookCount; i++) {
        if(bookIds[i] == id) {
            if(quantities[i] - borrowed[i] > 0) {
                borrowed[i]++;
                cout << "Book Issued Successfully" << endl;
            } else {
                cout << "Book Not Available" << endl;
            }
            return;
        }
    }
    cout << "Book Not Found" << endl;
}

void returnBook() {
    if(bookCount == 0) {
        cout << "No Books in Library" << endl;
        return;
    }
    int id;
    cout << "Enter Book ID to Return: ";
    cin >> id;
    for(int i = 0; i < bookCount; i++) {
        if(bookIds[i] == id) {
            if(borrowed[i] > 0) {
                borrowed[i]--;
                cout << "Book Returned Successfully" << endl;
            } else {
                cout << "No Record of Issued Book" << endl;
            }
            return;
        }
    }
    cout << "Book Not Found" << endl;
}

void deleteBook() {
    if(bookCount == 0) {
        cout << "No Books in Library" << endl;
        return;
    }
    int id;
    cout << "Enter Book ID to Delete: ";
    cin >> id;
    for(int i = 0; i < bookCount; i++) {
        if(bookIds[i] == id) {
            for(int j = i; j < bookCount - 1; j++) {
                titles[j] = titles[j+1];
                authors[j] = authors[j+1];
                bookIds[j] = bookIds[j+1];
                quantities[j] = quantities[j+1];
                borrowed[j] = borrowed[j+1];
            }
            bookCount--;
            cout << "Book Deleted Successfully" << endl;
            return;
        }
    }
    cout << "Book Not Found" << endl;
}

void displayMenu() {
    cout << endl;
    cout << "===== MINI LIBRARY SYSTEM =====" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Display Books" << endl;
    cout << "3. Search Book" << endl;
    cout << "4. Issue Book" << endl;
    cout << "5. Return Book" << endl;
    cout << "6. Delete Book" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter Choice: ";
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: deleteBook(); break;
            case 7: cout << "Thank You" << endl; break;
            default: cout << "Invalid Choice" << endl;
        }
    } while(choice != 7);

    return 0;
}