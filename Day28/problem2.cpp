#include<iostream>
using namespace std;
struct Account{
    int accountNumber;
    string name;
    int pin;
    string accountType;
    float balance;
};
int main(){
    Account account[100];
    int count=0;
    int choice;
    do{

        cout<<"\n===== BANK ACCOUNT SYSTEM ====="<<endl;
        cout<<"1. Create Account"<<endl;
        cout<<"2. Display Accounts"<<endl;
        cout<<"3. Search Account"<<endl;
        cout<<"4. Deposit Money"<<endl;
        cout<<"5. Withdraw Money"<<endl;
        cout<<"6. Delete Account"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice){
        case 1:{

            cout<<"Enter Account Number: ";
            cin>>account[count].accountNumber;

            cin.ignore();

            cout<<"Enter Name: ";
            getline(cin,account[count].name);

            cout<<"Enter PIN: ";
            cin>>account[count].pin;

            cin.ignore();

            cout<<"Enter Account Type: ";
            getline(cin,account[count].accountType);

            cout<<"Enter Initial Balance: ";
            cin>>account[count].balance;

            count++;

            cout<<"Account Created Successfully"<<endl;

            break;
        }
        case 2:{

            if(count==0){
                cout<<"No Accounts Found"<<endl;
                break;
            }

            for(int i=0;i<count;i++){

                cout<<"\n-------------------------"<<endl;
                cout<<"Account Number: "<<account[i].accountNumber<<endl;
                cout<<"Name: "<<account[i].name<<endl;
                cout<<"PIN: "<<account[i].pin<<endl;
                cout<<"Account Type: "<<account[i].accountType<<endl;
                cout<<"Balance: "<<account[i].balance<<endl;
            }

            break;
        }

        case 3:{

            int acc;
            bool found=false;

            cout<<"Enter Account Number: ";
            cin>>acc;

            for(int i=0;i<count;i++){

                if(account[i].accountNumber==acc){

                    found=true;

                    cout<<"Account Found"<<endl;
                    cout<<"Name: "<<account[i].name<<endl;
                    cout<<"PIN: "<<account[i].pin<<endl;
                    cout<<"Account Type: "<<account[i].accountType<<endl;
                    cout<<"Balance: "<<account[i].balance<<endl;

                    break;
                }
            }

            if(found==false){
                cout<<"Account Not Found"<<endl;
            }

            break;
        }

        case 4:{

            int acc;
            float amount;
            bool found=false;

            cout<<"Enter Account Number: ";
            cin>>acc;

            cout<<"Enter Amount: ";
            cin>>amount;

            for(int i=0;i<count;i++){

                if(account[i].accountNumber==acc){

                    account[i].balance+=amount;

                    cout<<"Deposit Successful"<<endl;
                    cout<<"Current Balance: "<<account[i].balance<<endl;

                    found=true;

                    break;
                }
            }

            if(found==false){
                cout<<"Account Not Found"<<endl;
            }

            break;
        }

        case 5:{

            int acc,pin;
            float amount;
            bool found=false;

            cout<<"Enter Account Number: ";
            cin>>acc;

            cout<<"Enter PIN: ";
            cin>>pin;

            cout<<"Enter Amount: ";
            cin>>amount;

            for(int i=0;i<count;i++){

                if(account[i].accountNumber==acc && account[i].pin==pin){

                    found=true;

                    if(account[i].balance>=amount){

                        account[i].balance-=amount;

                        cout<<"Withdrawal Successful"<<endl;
                        cout<<"Remaining Balance: "<<account[i].balance<<endl;
                    }

                    else{

                        cout<<"Insufficient Balance"<<endl;
                    }

                    break;
                }
            }

            if(found==false){

                cout<<"Invalid Account Number or PIN"<<endl;
            }

            break;
        }

        case 6:{

            int acc;
            bool found=false;

            cout<<"Enter Account Number to Delete: ";
            cin>>acc;

            for(int i=0;i<count;i++){

                if(account[i].accountNumber==acc){

                    for(int j=i;j<count-1;j++){

                        account[j]=account[j+1];
                    }

                    count--;

                    found=true;

                    cout<<"Account Deleted Successfully"<<endl;

                    break;
                }
            }

            if(found==false){

                cout<<"Account Not Found"<<endl;
            }

            break;
        }

        case 7:

            cout<<"Thank You"<<endl;
            break;

        default:

            cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=7);

    return 0;
}