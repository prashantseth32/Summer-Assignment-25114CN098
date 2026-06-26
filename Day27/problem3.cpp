#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Salary{
    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float tax;
    float netSalary;
};

void addEmployee(vector<Salary> &employee){

    int records;

    cout<<"Enter number of employees: ";
    cin>>records;
    cin.ignore();

    for(int i=0;i<records;i++){

        Salary temp;

        cout<<"\nEmployee "<<i+1<<endl;

        cout<<"Employee ID: ";
        cin>>temp.id;
        cin.ignore();

        cout<<"Employee Name: ";
        getline(cin,temp.name);

        cout<<"Basic Salary: ";
        cin>>temp.basicSalary;

        cout<<"HRA: ";
        cin>>temp.hra;

        cout<<"DA: ";
        cin>>temp.da;

        cout<<"Tax: ";
        cin>>temp.tax;

        temp.netSalary=temp.basicSalary+temp.hra+temp.da-temp.tax;

        cin.ignore();

        employee.push_back(temp);
    }
}

void display(vector<Salary> &employee){

    if(employee.empty()){
        cout<<"No Records Found"<<endl;
        return;
    }

    for(int i=0;i<employee.size();i++){

        cout<<"\n---------------------------"<<endl;
        cout<<"Employee ID : "<<employee[i].id<<endl;
        cout<<"Name        : "<<employee[i].name<<endl;
        cout<<"Basic Salary: "<<employee[i].basicSalary<<endl;
        cout<<"HRA         : "<<employee[i].hra<<endl;
        cout<<"DA          : "<<employee[i].da<<endl;
        cout<<"Tax         : "<<employee[i].tax<<endl;
        cout<<"Net Salary  : "<<employee[i].netSalary<<endl;
    }
}

void search(vector<Salary> &employee){

    int id;

    cout<<"Enter Employee ID: ";
    cin>>id;

    for(int i=0;i<employee.size();i++){

        if(employee[i].id==id){

            cout<<"\nEmployee Found"<<endl;

            cout<<"Employee ID : "<<employee[i].id<<endl;
            cout<<"Name        : "<<employee[i].name<<endl;
            cout<<"Basic Salary: "<<employee[i].basicSalary<<endl;
            cout<<"HRA         : "<<employee[i].hra<<endl;
            cout<<"DA          : "<<employee[i].da<<endl;
            cout<<"Tax         : "<<employee[i].tax<<endl;
            cout<<"Net Salary  : "<<employee[i].netSalary<<endl;

            return;
        }
    }

    cout<<"Employee Not Found"<<endl;
}

void update(vector<Salary> &employee){

    int id;

    cout<<"Enter Employee ID: ";
    cin>>id;
    cin.ignore();

    for(int i=0;i<employee.size();i++){

        if(employee[i].id==id){

            cout<<"Enter New Name: ";
            getline(cin,employee[i].name);

            cout<<"Enter Basic Salary: ";
            cin>>employee[i].basicSalary;

            cout<<"Enter HRA: ";
            cin>>employee[i].hra;

            cout<<"Enter DA: ";
            cin>>employee[i].da;

            cout<<"Enter Tax: ";
            cin>>employee[i].tax;

            employee[i].netSalary=employee[i].basicSalary+
                                  employee[i].hra+
                                  employee[i].da-
                                  employee[i].tax;

            cout<<"Record Updated Successfully"<<endl;

            return;
        }
    }

    cout<<"Employee Not Found"<<endl;
}

void deleteEmployee(vector<Salary> &employee){

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

void highestSalary(vector<Salary> &employee){

    if(employee.empty()){

        cout<<"No Records"<<endl;
        return;
    }

    int index=0;

    for(int i=1;i<employee.size();i++){

        if(employee[i].netSalary>employee[index].netSalary){

            index=i;
        }
    }

    cout<<"\nHighest Salary Employee"<<endl;

    cout<<"Employee ID : "<<employee[index].id<<endl;
    cout<<"Name        : "<<employee[index].name<<endl;
    cout<<"Net Salary  : "<<employee[index].netSalary<<endl;
}

void averageSalary(vector<Salary> &employee){

    if(employee.empty()){

        cout<<"No Records"<<endl;
        return;
    }

    float sum=0;

    for(int i=0;i<employee.size();i++){

        sum=sum+employee[i].netSalary;
    }

    cout<<"Average Salary = "<<sum/employee.size()<<endl;
}

int main(){

    vector<Salary> employee;

    int choice;

    do{

        cout<<"\n========== SALARY MANAGEMENT SYSTEM ==========\n";

        cout<<"1. Add Employee Salary"<<endl;
        cout<<"2. Display Salary Details"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Update Salary"<<endl;
        cout<<"5. Delete Employee"<<endl;
        cout<<"6. Highest Salary"<<endl;
        cout<<"7. Average Salary"<<endl;
        cout<<"8. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                addEmployee(employee);
                break;

            case 2:
                display(employee);
                break;

            case 3:
                search(employee);
                break;

            case 4:
                update(employee);
                break;

            case 5:
                deleteEmployee(employee);
                break;

            case 6:
                highestSalary(employee);
                break;

            case 7:
                averageSalary(employee);
                break;

            case 8:
                cout<<"Thank You"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=8);

    return 0;
}