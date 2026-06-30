#include <iostream>
#include <string>
using namespace std;
const int MAX_EMPLOYEES = 50;
string names[MAX_EMPLOYEES];
string departments[MAX_EMPLOYEES];
int employeeIds[MAX_EMPLOYEES];
double salaries[MAX_EMPLOYEES];
int employeeCount = 0;

void addEmployee() {
    if(employeeCount >= MAX_EMPLOYEES) {
        cout << "Maximum employees limit reached" << endl;
        return;
    }
    employeeIds[employeeCount] = employeeCount + 1;
    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, names[employeeCount]);
    cout << "Enter Department: ";
    getline(cin, departments[employeeCount]);
    cout << "Enter Salary: ";
    cin >> salaries[employeeCount];
    employeeCount++;
    cout << "Employee Added Successfully" << endl;
}

void displayEmployees() {
    if(employeeCount == 0) {
        cout << "No Employees Found" << endl;
        return;
    }
    cout << "\n--- Employee Records ---" << endl;
    for(int i = 0; i < employeeCount; i++) {
        cout << "ID: " << employeeIds[i] 
             << " | Name: " << names[i] 
             << " | Department: " << departments[i] 
             << " | Salary: " << salaries[i] << endl;
    }
}

void searchEmployee() {
    if(employeeCount == 0) {
        cout << "No Employees Found" << endl;
        return;
    }
    int id;
    cout << "Enter Employee ID to Search: ";
    cin >> id;
    for(int i = 0; i < employeeCount; i++) {
        if(employeeIds[i] == id) {
            cout << "Employee Found:" << endl;
            cout << "ID: " << employeeIds[i] << endl;
            cout << "Name: " << names[i] << endl;
            cout << "Department: " << departments[i] << endl;
            cout << "Salary: " << salaries[i] << endl;
            return;
        }
    }
    cout << "Employee Not Found" << endl;
}

void updateEmployee() {
    if(employeeCount == 0) {
        cout << "No Employees Found" << endl;
        return;
    }
    int id;
    cout << "Enter Employee ID to Update: ";
    cin >> id;
    for(int i = 0; i < employeeCount; i++) {
        if(employeeIds[i] == id) {
            cout << "Enter New Name: ";
            cin.ignore();
            getline(cin, names[i]);
            cout << "Enter New Department: ";
            getline(cin, departments[i]);
            cout << "Enter New Salary: ";
            cin >> salaries[i];
            cout << "Employee Updated Successfully" << endl;
            return;
        }
    }
    cout << "Employee Not Found" << endl;
}

void deleteEmployee() {
    if(employeeCount == 0) {
        cout << "No Employees Found" << endl;
        return;
    }
    int id;
    cout << "Enter Employee ID to Delete: ";
    cin >> id;
    for(int i = 0; i < employeeCount; i++) {
        if(employeeIds[i] == id) {
            for(int j = i; j < employeeCount - 1; j++) {
                names[j] = names[j+1];
                departments[j] = departments[j+1];
                employeeIds[j] = employeeIds[j+1];
                salaries[j] = salaries[j+1];
            }
            employeeCount--;
            cout << "Employee Deleted Successfully" << endl;
            return;
        }
    }
    cout << "Employee Not Found" << endl;
}

void displayMenu() {
    cout << endl;
    cout << "===== MINI EMPLOYEE MANAGEMENT SYSTEM =====" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Display Employees" << endl;
    cout << "3. Search Employee" << endl;
    cout << "4. Update Employee" << endl;
    cout << "5. Delete Employee" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter Choice: ";
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: cout << "Thank You" << endl; break;
            default: cout << "Invalid Choice" << endl;
        }
    } while(choice != 6);

    return 0;
}