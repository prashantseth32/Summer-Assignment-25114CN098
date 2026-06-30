#include <iostream>
#include <string>
using namespace std;
const int MAX_ACCOUNTS = 50;
string accountHolders[MAX_ACCOUNTS];
string accountNumbers[MAX_ACCOUNTS];
double balances[MAX_ACCOUNTS];
string accountTypes[MAX_ACCOUNTS];  // Savings or Current
int accountCount = 0;

void createAccount() {
    if(accountCount >= MAX_ACCOUNTS) {
        cout << "Maximum accounts limit reached" << endl;
        return;
    }
    accountNumbers[accountCount] = "ACC" + to_string(1000 + accountCount);
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, accountHolders[accountCount]);
    cout << "Enter Account Type (Savings/Current): ";
    getline(cin, accountTypes[accountCount]);
    cout << "Enter Initial Deposit: ";
    cin >> balances[accountCount];
    
    cout << "\nAccount Created Successfully!" << endl;
    cout << "Account Number: " << accountNumbers[accountCount] << endl;
    accountCount++;
}

void displayAllAccounts() {
    if(accountCount == 0) {
        cout << "No Accounts Found" << endl;
        return;
    }
    cout << "\n--- All Bank Accounts ---" << endl;
    for(int i = 0; i < accountCount; i++) {
        cout << "Account No: " << accountNumbers[i] 
             << " | Name: " << accountHolders[i] 
             << " | Type: " << accountTypes[i] 
             << " | Balance: " << balances[i] << endl;
    }
}

void searchAccount() {
    if(accountCount == 0) {
        cout << "No Accounts Found" << endl;
        return;
    }
    string accNo;
    cout << "Enter Account Number: ";
    cin >> accNo;
    for(int i = 0; i < accountCount; i++) {
        if(accountNumbers[i] == accNo) {
            cout << "\nAccount Details:" << endl;
            cout << "Account Number : " << accountNumbers[i] << endl;
            cout << "Holder Name    : " << accountHolders[i] << endl;
            cout << "Account Type   : " << accountTypes[i] << endl;
            cout << "Current Balance: " << balances[i] << endl;
            return;
        }
    }
    cout << "Account Not Found" << endl;
}

void depositMoney() {
    if(accountCount == 0) {
        cout << "No Accounts Found" << endl;
        return;
    }
    string accNo;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNo;
    for(int i = 0; i < accountCount; i++) {
        if(accountNumbers[i] == accNo) {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            if(amount > 0) {
                balances[i] += amount;
                cout << "Deposit Successful. New Balance: " << balances[i] << endl;
            } else {
                cout << "Invalid Amount" << endl;
            }
            return;
        }
    }
    cout << "Account Not Found" << endl;
}

void withdrawMoney() {
    if(accountCount == 0) {
        cout << "No Accounts Found" << endl;
        return;
    }
    string accNo;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNo;
    for(int i = 0; i < accountCount; i++) {
        if(accountNumbers[i] == accNo) {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;
            if(amount > 0 && amount <= balances[i]) {
                balances[i] -= amount;
                cout << "Withdrawal Successful. New Balance: " << balances[i] << endl;
            } else {
                cout << "Insufficient Balance or Invalid Amount" << endl;
            }
            return;
        }
    }
    cout << "Account Not Found" << endl;
}

void transferMoney() {
    if(accountCount == 0) {
        cout << "No Accounts Found" << endl;
        return;
    }
    string fromAcc, toAcc;
    double amount;
    cout << "Enter From Account Number: ";
    cin >> fromAcc;
    cout << "Enter To Account Number: ";
    cin >> toAcc;
    cout << "Enter Amount to Transfer: ";
    cin >> amount;

    int fromIndex = -1, toIndex = -1;
    for(int i = 0; i < accountCount; i++) {
        if(accountNumbers[i] == fromAcc) fromIndex = i;
        if(accountNumbers[i] == toAcc) toIndex = i;
    }

    if(fromIndex == -1 || toIndex == -1) {
        cout << "One or both accounts not found" << endl;
        return;
    }
    if(amount <= 0 || amount > balances[fromIndex]) {
        cout << "Insufficient Balance or Invalid Amount" << endl;
        return;
    }

    balances[fromIndex] -= amount;
    balances[toIndex] += amount;
    cout << "Transfer Successful" << endl;
}

void displayMenu() {
    cout << endl;
    cout << "===== MINI BANK MANAGEMENT SYSTEM =====" << endl;
    cout << "1. Create New Account" << endl;
    cout << "2. Display All Accounts" << endl;
    cout << "3. Search Account" << endl;
    cout << "4. Deposit Money" << endl;
    cout << "5. Withdraw Money" << endl;
    cout << "6. Transfer Money" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter Choice: ";
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1: createAccount(); break;
            case 2: displayAllAccounts(); break;
            case 3: searchAccount(); break;
            case 4: depositMoney(); break;
            case 5: withdrawMoney(); break;
            case 6: transferMoney(); break;
            case 7: cout << "Thank You for using Mini Bank System" << endl; break;
            default: cout << "Invalid Choice" << endl;
        }
    } while(choice != 7);

    return 0;
}