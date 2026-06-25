#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"enter voter name"<<endl;
    getline(cin,name);
    int age;
    cout<<"enter the age"<<endl;
    cin>>age;  
    if(age>=18){
        cout<<"Name :"<<" "<<name<<endl;
        cout<<"Eligible for voting"<<endl;
    }
    else{
        cout<< "Name :"<<" "<<name<<endl;
        cout<<"Not eligible for voting"<<endl;
        cout<<"Age : "<<" "<<age<<endl;
        cout<<"You can vote after"<<" "<<18-age<<" years"<<endl;

    }

} 