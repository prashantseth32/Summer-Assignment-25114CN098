#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int choice;
    double num1,num2,result;
    do{
        cout<<"\n===== MENU DRIVEN CALCULATOR ====="<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Modulus"<<endl;
        cout<<"6. Power"<<endl;
        cout<<"7. Square Root"<<endl;
        cout<<"8. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter First Number: ";
            cin>>num1;
            cout<<"Enter Second Number: ";
            cin>>num2;
            result=num1+num2;
            cout<<"Answer = "<<result<<endl;
            break;
        case 2:
            cout<<"Enter First Number: ";
            cin>>num1;
            cout<<"Enter Second Number: ";
            cin>>num2;
            result=num1-num2;
            cout<<"Answer = "<<result<<endl;
            break;

        case 3:
            cout<<"Enter First Number: ";
            cin>>num1;
            cout<<"Enter Second Number: ";
            cin>>num2;
            result=num1*num2;
            cout<<"Answer = "<<result<<endl;
            break;

        case 4:
            cout<<"Enter First Number: ";
            cin>>num1;
            cout<<"Enter Second Number: ";
            cin>>num2;
            if(num2==0){

                cout<<"Division by Zero is not possible"<<endl;
            }

            else{

                result=num1/num2;

                cout<<"Answer = "<<result<<endl;
            }

            break;
        case 5:
            int a,b;
            cout<<"Enter First Number: ";
            cin>>a;
            cout<<"Enter Second Number: ";
            cin>>b;
            if(b==0){

                cout<<"Modulus by Zero is not possible"<<endl;
            }

            else{

                cout<<"Answer = "<<a%b<<endl;
            }

            break;

        case 6:

            cout<<"Enter Base: ";
            cin>>num1;

            cout<<"Enter Power: ";
            cin>>num2;

            cout<<"Answer = "<<pow(num1,num2)<<endl;

            break;

        case 7:

            cout<<"Enter Number: ";
            cin>>num1;

            if(num1<0){

                cout<<"Square Root of Negative Number is not possible"<<endl;
            }

            else{

                cout<<"Answer = "<<sqrt(num1)<<endl;
            }

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