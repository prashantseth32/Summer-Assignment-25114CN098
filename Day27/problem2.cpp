#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Employee{
    int id;
    string name;
    string department;
    string designation;
    float salary;
};

void addEmployee(vector<Employee> &employee){

    int records;

    cout<<"Enter number of employees: ";
    cin>>records;
    cin.ignore();

    for(int i=0;i<records;i++){

        Employee temp;

        cout<<"\nEmployee "<<i+1<<endl;

        cout<<"ID: ";
        cin>>temp.id;
        cin.ignore();

        cout<<"Name: ";
        getline(cin,temp.name);

        cout<<"Department: ";
        getline(cin,temp.department);

        cout<<"Designation: ";
        getline(cin,temp.designation);

        cout<<"Salary: ";
        cin>>temp.salary;
        cin.ignore();

        employee.push_back(temp);
    }
}

void displayEmployee(vector<Employee> &employee){

    if(employee.empty()){
        cout<<"No Employee Records Found"<<endl;
        return;
    }

    for(int i=0;i<employee.size();i++){

        cout<<"\n---------------------------"<<endl;
        cout<<"ID          : "<<employee[i].id<<endl;
        cout<<"Name        : "<<employee[i].name<<endl;
        cout<<"Department  : "<<employee[i].department<<endl;
        cout<<"Designation : "<<employee[i].designation<<endl;
        cout<<"Salary      : "<<employee[i].salary<<endl;
    }
}

void searchEmployee(vector<Employee> &employee){

    int id;

    cout<<"Enter Employee ID: ";
    cin>>id;

    for(int i=0;i<employee.size();i++){

        if(employee[i].id==id){

            cout<<"\nEmployee Found"<<endl;

            cout<<"ID          : "<<employee[i].id<<endl;
            cout<<"Name        : "<<employee[i].name<<endl;
            cout<<"Department  : "<<employee[i].department<<endl;
            cout<<"Designation : "<<employee[i].designation<<endl;
            cout<<"Salary      : "<<employee[i].salary<<endl;

            return;
        }
    }

    cout<<"Employee Not Found"<<endl;
}

void updateEmployee(vector<Employee> &employee){

    int id;

    cout<<"Enter Employee ID: ";
    cin>>id;
    cin.ignore();

    for(int i=0;i<employee.size();i++){

        if(employee[i].id==id){

            cout<<"Enter New Name: ";
            getline(cin,employee[i].name);

            cout<<"Enter New Department: ";
            getline(cin,employee[i].department);

            cout<<"Enter New Designation: ";
            getline(cin,employee[i].designation);

            cout<<"Enter New Salary: ";
            cin>>employee[i].salary;

            cout<<"Record Updated Successfully"<<endl;

            return;
        }
    }

    cout<<"Employee Not Found"<<endl;
}

void deleteEmployee(vector<Employee> &employee){

    int id;

    cout<<"Enter Employee ID: ";
    cin>>id;

    for(int i=0;i<employee.size();i++){

        if(employee[i].id==id){

            employee.erase(employee.begin()+i);

            cout<<"Record Deleted Successfully"<<endl;

            return;
        }
    }

    cout<<"Employee Not Found"<<endl;
}

void highestSalary(vector<Employee> &employee){

    if(employee.empty()){

        cout<<"No Employee Records"<<endl;
        return;
    }

    int index=0;

    for(int i=1;i<employee.size();i++){

        if(employee[i].salary>employee[index].salary){

            index=i;
        }
    }

    cout<<"\nHighest Salary Employee"<<endl;

    cout<<"ID          : "<<employee[index].id<<endl;
    cout<<"Name        : "<<employee[index].name<<endl;
    cout<<"Department  : "<<employee[index].department<<endl;
    cout<<"Designation : "<<employee[index].designation<<endl;
    cout<<"Salary      : "<<employee[index].salary<<endl;
}

int main(){

    vector<Employee> employee;

    int choice;

    do{

        cout<<"\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n";

        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display Employees"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Update Employee"<<endl;
        cout<<"5. Delete Employee"<<endl;
        cout<<"6. Highest Salary Employee"<<endl;
        cout<<"7. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                addEmployee(employee);
                break;

            case 2:
                displayEmployee(employee);
                break;

            case 3:
                searchEmployee(employee);
                break;

            case 4:
                updateEmployee(employee);
                break;

            case 5:
                deleteEmployee(employee);
                break;

            case 6:
                highestSalary(employee);
                break;

            case 7:
                cout<<"Thank You"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=7);

    return 0;
}