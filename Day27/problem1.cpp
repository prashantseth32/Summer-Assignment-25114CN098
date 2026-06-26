#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Student{
    int rollnumber;
    string name;
    string branch;
    float marks;
};

void add(vector<Student> &student){

    int records;

    cout<<"Enter how many records you want to enter: ";
    cin>>records;
    cin.ignore();

    for(int i=0;i<records;i++){

        Student temp;

        cout<<"\nStudent "<<i+1<<endl;

        cout<<"Roll Number: ";
        cin>>temp.rollnumber;
        cin.ignore();

        cout<<"Name: ";
        getline(cin,temp.name);

        cout<<"Branch: ";
        getline(cin,temp.branch);

        cout<<"Marks: ";
        cin>>temp.marks;
        cin.ignore();

        student.push_back(temp);
    }
}

void display(vector<Student> &student){

    if(student.empty()){
        cout<<"No Records Found"<<endl;
        return;
    }

    for(int i=0;i<student.size();i++){

        cout<<"\n-------------------------"<<endl;
        cout<<"Roll Number : "<<student[i].rollnumber<<endl;
        cout<<"Name        : "<<student[i].name<<endl;
        cout<<"Branch      : "<<student[i].branch<<endl;
        cout<<"Marks       : "<<student[i].marks<<endl;
    }
}

void search(vector<Student> &student){

    int roll;

    cout<<"Enter Roll Number: ";
    cin>>roll;

    for(int i=0;i<student.size();i++){

        if(student[i].rollnumber==roll){

            cout<<"\nStudent Found"<<endl;

            cout<<"Roll Number : "<<student[i].rollnumber<<endl;
            cout<<"Name        : "<<student[i].name<<endl;
            cout<<"Branch      : "<<student[i].branch<<endl;
            cout<<"Marks       : "<<student[i].marks<<endl;

            return;
        }
    }

    cout<<"Student Not Found"<<endl;
}

void update(vector<Student> &student){

    int roll;

    cout<<"Enter Roll Number: ";
    cin>>roll;
    cin.ignore();

    for(int i=0;i<student.size();i++){

        if(student[i].rollnumber==roll){

            cout<<"Enter New Name: ";
            getline(cin,student[i].name);

            cout<<"Enter New Branch: ";
            getline(cin,student[i].branch);

            cout<<"Enter New Marks: ";
            cin>>student[i].marks;

            cout<<"Record Updated"<<endl;
            return;
        }
    }

    cout<<"Student Not Found"<<endl;
}

void deletedata(vector<Student> &student){

    int roll;

    cout<<"Enter Roll Number: ";
    cin>>roll;

    for(int i=0;i<student.size();i++){

        if(student[i].rollnumber==roll){

            student.erase(student.begin()+i);

            cout<<"Record Deleted"<<endl;

            return;
        }
    }

    cout<<"Student Not Found"<<endl;
}

void average(vector<Student> &student){

    if(student.empty()){
        cout<<"No Records"<<endl;
        return;
    }

    float sum=0;

    for(int i=0;i<student.size();i++){

        sum=sum+student[i].marks;
    }

    cout<<"Average Marks : "<<sum/student.size()<<endl;
}

void topper(vector<Student> &student){

    if(student.empty()){
        cout<<"No Records"<<endl;
        return;
    }

    int index=0;

    for(int i=1;i<student.size();i++){

        if(student[i].marks>student[index].marks){

            index=i;
        }
    }

    cout<<"\nTopper Details"<<endl;

    cout<<"Name : "<<student[index].name<<endl;
    cout<<"Roll Number : "<<student[index].rollnumber<<endl;
    cout<<"Branch : "<<student[index].branch<<endl;
    cout<<"Marks : "<<student[index].marks<<endl;
}

int main(){

    vector<Student> student;

    int choice;

    do{

        cout<<"\n========== STUDENT RECORD MANAGEMENT ==========\n";

        cout<<"1. Add Student"<<endl;
        cout<<"2. Display Students"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Update Student"<<endl;
        cout<<"5. Delete Student"<<endl;
        cout<<"6. Average Marks"<<endl;
        cout<<"7. Topper"<<endl;
        cout<<"8. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                add(student);
                break;

            case 2:
                display(student);
                break;

            case 3:
                search(student);
                break;

            case 4:
                update(student);
                break;

            case 5:
                deletedata(student);
                break;

            case 6:
                average(student);
                break;

            case 7:
                topper(student);
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