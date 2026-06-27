#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

int main() {
    Contact contacts[100];
    int count = 0;
    int choice;

    do {
        cout << endl;
        cout << "===== CONTACT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. View All Contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Update Contact" << endl;
        cout << "5. Delete Contact" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice) {

        case 1:
            cout << "Enter Name: ";
            getline(cin, contacts[count].name);

            cout << "Enter Phone Number: ";
            getline(cin, contacts[count].phone);

            cout << "Enter Email: ";
            getline(cin, contacts[count].email);

            count++;

            cout << "Contact Added Successfully!" << endl;
            break;

        case 2:
            if(count == 0) {
                cout << "No Contacts Found!" << endl;
                break;
            }

            for(int i = 0; i < count; i++) {
                cout << endl;
                cout << "Name: " << contacts[i].name << endl;
                cout << "Phone: " << contacts[i].phone << endl;
                cout << "Email: " << contacts[i].email << endl;
            }
            break;

        case 3: {
            string searchName;
            bool found = false;

            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            for(int i = 0; i < count; i++) {
                if(contacts[i].name == searchName) {
                    cout << "Contact Found" << endl;
                    cout << "Phone: " << contacts[i].phone << endl;
                    cout << "Email: " << contacts[i].email << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Contact Not Found!" << endl;

            break;
        }

        case 4: {
            string searchName;
            bool found = false;

            cout << "Enter Contact Name to Update: ";
            getline(cin, searchName);

            for(int i = 0; i < count; i++) {
                if(contacts[i].name == searchName) {

                    cout << "Enter New Phone Number: ";
                    getline(cin, contacts[i].phone);

                    cout << "Enter New Email: ";
                    getline(cin, contacts[i].email);

                    cout << "Contact Updated Successfully!" << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Contact Not Found!" << endl;

            break;
        }

        case 5: {
            string searchName;
            bool found = false;

            cout << "Enter Contact Name to Delete: ";
            getline(cin, searchName);

            for(int i = 0; i < count; i++) {
                if(contacts[i].name == searchName) {

                    for(int j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }

                    count--;

                    cout << "Contact Deleted Successfully!" << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Contact Not Found!" << endl;

            break;
        }

        case 6:
            cout << "Thank You" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}