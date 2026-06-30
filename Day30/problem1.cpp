#include <iostream>
#include <string>
using namespace std;
const int MAX_STUDENTS = 50;
string names[MAX_STUDENTS];
int rollNumbers[MAX_STUDENTS];
int ages[MAX_STUDENTS];
double marks[MAX_STUDENTS];
int studentCount = 0;
void addStudent() {
    if(studentCount >= MAX_STUDENTS) {
        cout << "Maximum students limit reached" << endl;
        return;
    }
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, names[studentCount]);
    cout << "Enter Roll Number: ";
    cin >> rollNumbers[studentCount];
    cout << "Enter Age: ";
    cin >> ages[studentCount];
    cout << "Enter Marks: ";
    cin >> marks[studentCount];
    studentCount++;
    cout << "Student Added Successfully" << endl;
}

void displayStudents() {
    if(studentCount == 0) {
        cout << "No Students Found" << endl;
        return;
    }
    cout << "\n--- Student Records ---" << endl;
    for(int i = 0; i < studentCount; i++) {
        cout << "Roll No: " << rollNumbers[i] 
             << " | Name: " << names[i] 
             << " | Age: " << ages[i] 
             << " | Marks: " << marks[i] << endl;
    }
}

void searchStudent() {
    if(studentCount == 0) {
        cout << "No Students Found" << endl;
        return;
    }
    int roll;
    cout << "Enter Roll Number to Search: ";
    cin >> roll;
    for(int i = 0; i < studentCount; i++) {
        if(rollNumbers[i] == roll) {
            cout << "Student Found:" << endl;
            cout << "Name: " << names[i] << endl;
            cout << "Roll No: " << rollNumbers[i] << endl;
            cout << "Age: " << ages[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            return;
        }
    }
    cout << "Student Not Found" << endl;
}

void updateStudent() {
    if(studentCount == 0) {
        cout << "No Students Found" << endl;
        return;
    }
    int roll;
    cout << "Enter Roll Number to Update: ";
    cin >> roll;
    for(int i = 0; i < studentCount; i++) {
        if(rollNumbers[i] == roll) {
            cout << "Enter New Name: ";
            cin.ignore();
            getline(cin, names[i]);
            cout << "Enter New Age: ";
            cin >> ages[i];
            cout << "Enter New Marks: ";
            cin >> marks[i];
            cout << "Student Updated Successfully" << endl;
            return;
        }
    }
    cout << "Student Not Found" << endl;
}

void deleteStudent() {
    if(studentCount == 0) {
        cout << "No Students Found" << endl;
        return;
    }
    int roll;
    cout << "Enter Roll Number to Delete: ";
    cin >> roll;
    for(int i = 0; i < studentCount; i++) {
        if(rollNumbers[i] == roll) {
            for(int j = i; j < studentCount - 1; j++) {
                names[j] = names[j+1];
                rollNumbers[j] = rollNumbers[j+1];
                ages[j] = ages[j+1];
                marks[j] = marks[j+1];
            }
            studentCount--;
            cout << "Student Deleted Successfully" << endl;
            return;
        }
    }
    cout << "Student Not Found" << endl;
}

void displayMenu() {
    cout << endl;
    cout << "===== STUDENT RECORD SYSTEM =====" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display All Students" << endl;
    cout << "3. Search Student" << endl;
    cout << "4. Update Student" << endl;
    cout << "5. Delete Student" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter Choice: ";
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "Thank You" << endl; break;
            default: cout << "Invalid Choice" << endl;
        }
    } while(choice != 6);

    return 0;
}