#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Student{
    int rollNo;
    string name;

    int maths;
    int physics;
    int chemistry;
    int english;
    int computer;

    int total;
    float percentage;
    char grade;
};

void addStudent(vector<Student> &student){

    int records;

    cout<<"Enter number of students: ";
    cin>>records;
    cin.ignore();

    for(int i=0;i<records;i++){

        Student temp;

        cout<<"\nStudent "<<i+1<<endl;

        cout<<"Roll Number: ";
        cin>>temp.rollNo;
        cin.ignore();

        cout<<"Name: ";
        getline(cin,temp.name);

        cout<<"Maths: ";
        cin>>temp.maths;

        cout<<"Physics: ";
        cin>>temp.physics;

        cout<<"Chemistry: ";
        cin>>temp.chemistry;

        cout<<"English: ";
        cin>>temp.english;

        cout<<"Computer: ";
        cin>>temp.computer;

        temp.total=temp.maths+temp.physics+temp.chemistry+
                   temp.english+temp.computer;

        temp.percentage=temp.total/5.0;

        if(temp.percentage>=90)
            temp.grade='A';
        else if(temp.percentage>=80)
            temp.grade='B';
        else if(temp.percentage>=70)
            temp.grade='C';
        else if(temp.percentage>=60)
            temp.grade='D';
        else
            temp.grade='F';

        cin.ignore();

        student.push_back(temp);
    }
}

void display(vector<Student> &student){

    if(student.empty()){
        cout<<"No Records"<<endl;
        return;
    }

    for(int i=0;i<student.size();i++){

        cout<<"\n-----------------------------"<<endl;
        cout<<"Roll Number : "<<student[i].rollNo<<endl;
        cout<<"Name        : "<<student[i].name<<endl;
        cout<<"Maths       : "<<student[i].maths<<endl;
        cout<<"Physics     : "<<student[i].physics<<endl;
        cout<<"Chemistry   : "<<student[i].chemistry<<endl;
        cout<<"English     : "<<student[i].english<<endl;
        cout<<"Computer    : "<<student[i].computer<<endl;
        cout<<"Total       : "<<student[i].total<<endl;
        cout<<"Percentage  : "<<student[i].percentage<<endl;
        cout<<"Grade       : "<<student[i].grade<<endl;
    }
}

void search(vector<Student> &student){

    int roll;

    cout<<"Enter Roll Number: ";
    cin>>roll;

    for(int i=0;i<student.size();i++){

        if(student[i].rollNo==roll){

            cout<<"\nStudent Found"<<endl;

            cout<<"Name : "<<student[i].name<<endl;
            cout<<"Percentage : "<<student[i].percentage<<endl;
            cout<<"Grade : "<<student[i].grade<<endl;

            return;
        }
    }

    cout<<"Student Not Found"<<endl;
}

void update(vector<Student> &student){

    int roll;

    cout<<"Enter Roll Number: ";
    cin>>roll;

    for(int i=0;i<student.size();i++){

        if(student[i].rollNo==roll){

            cout<<"Enter Maths Marks: ";
            cin>>student[i].maths;

            cout<<"Enter Physics Marks: ";
            cin>>student[i].physics;

            cout<<"Enter Chemistry Marks: ";
            cin>>student[i].chemistry;

            cout<<"Enter English Marks: ";
            cin>>student[i].english;

            cout<<"Enter Computer Marks: ";
            cin>>student[i].computer;

            student[i].total=
            student[i].maths+
            student[i].physics+
            student[i].chemistry+
            student[i].english+
            student[i].computer;

            student[i].percentage=
            student[i].total/5.0;

            if(student[i].percentage>=90)
                student[i].grade='A';
            else if(student[i].percentage>=80)
                student[i].grade='B';
            else if(student[i].percentage>=70)
                student[i].grade='C';
            else if(student[i].percentage>=60)
                student[i].grade='D';
            else
                student[i].grade='F';

            cout<<"Record Updated"<<endl;

            return;
        }
    }

    cout<<"Student Not Found"<<endl;
}

void deleteStudent(vector<Student> &student){

    int roll;

    cout<<"Enter Roll Number: ";
    cin>>roll;

    for(int i=0;i<student.size();i++){

        if(student[i].rollNo==roll){

            student.erase(student.begin()+i);

            cout<<"Record Deleted"<<endl;

            return;
        }
    }

    cout<<"Student Not Found"<<endl;
}

void topper(vector<Student> &student){

    if(student.empty()){

        cout<<"No Records"<<endl;
        return;
    }

    int index=0;

    for(int i=1;i<student.size();i++){

        if(student[i].percentage>
           student[index].percentage){

            index=i;
        }
    }

    cout<<"\n------ TOPPER ------"<<endl;

    cout<<"Name : "<<student[index].name<<endl;
    cout<<"Roll Number : "<<student[index].rollNo<<endl;
    cout<<"Percentage : "<<student[index].percentage<<endl;
    cout<<"Grade : "<<student[index].grade<<endl;
}

void average(vector<Student> &student){

    if(student.empty()){

        cout<<"No Records"<<endl;
        return;
    }

    float sum=0;

    for(int i=0;i<student.size();i++){

        sum=sum+student[i].percentage;
    }

    cout<<"Average Percentage : "
        <<sum/student.size()<<endl;
}

int main(){

    vector<Student> student;

    int choice;

    do{

        cout<<"\n========== MARKSHEET SYSTEM ==========\n";

        cout<<"1. Add Student"<<endl;
        cout<<"2. Display Students"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Update Marks"<<endl;
        cout<<"5. Delete Student"<<endl;
        cout<<"6. Topper"<<endl;
        cout<<"7. Average Percentage"<<endl;
        cout<<"8. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                addStudent(student);
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
                deleteStudent(student);
                break;

            case 6:
                topper(student);
                break;

            case 7:
                average(student);
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