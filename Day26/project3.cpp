#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Account{
    string name;
    int pin;
    int bankaccountnumber;
    int balance;
};
void enteries(vector<Account> &account, int &n){
    for(int i=0;i<n;i++){
        cout<<"Name: ";
        getline(cin,account[i].name);

        cout<<"Pin: ";
        cin>>account[i].pin;

        cout<<"Bank account number: ";
        cin>>account[i].bankaccountnumber;

        cout<<"Balance: ";
        cin>>account[i].balance;

        cin.ignore();
    }
}
int withdrawl(vector<Account> &account,int &n,int &p){
    int amount;
    cout<<"Enter the amount"<<endl;
    cin>>amount;
    for(int i=0;i<n;i++){
        if(account[i].pin==p){
            if(account[i].balance>=amount){
                account[i].balance = account[i].balance - amount;
                cout<<"Transaction is successful"<<endl;
                return account[i].balance;
            }
            else{
                cout<<"Insufficient balance"<<endl;
                return account[i].balance;
            }
        }
    }

    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of records"<<endl;
    cin>>n;
    cin.ignore();
    vector<Account> account(n);   
    enteries(account,n);
    int p;
    cout<<"Enter your pin"<<endl;
    cin>>p;
    for(int i=0;i<n;i++){
        if(account[i].pin==p){
            cout<<"1. Withdrawal"<<endl;
            cout<<"2. Check Balance"<<endl;
            cout<<"3. Bank Details"<<endl;
            int choice;
            cout<<"Enter your choice"<<endl;
            cin>>choice;
            switch(choice){
                case 1:{
                    int s = withdrawl(account,n,p);
                    if(s!=-1){
                        cout<<"Remaining Balance: "<<s<<endl;
                    }
                    break;
                }
                case 2:{
                    cout<<"Balance: "<<account[i].balance<<endl;
                    break;
                }
                case 3:
                {
                    cout<<"Name: "<<account[i].name<<endl;
                    cout<<"Account Number: "<<account[i].bankaccountnumber<<endl;
                    cout<<"Balance: "<<account[i].balance<<endl;
                    break;
                }

                default:
                    cout<<"Invalid Choice"<<endl;
            }

            return 0;
        }
    }

    cout<<"Invalid PIN"<<endl;
}