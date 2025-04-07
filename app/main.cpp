#include <iostream>
#include <map>
#include <string>

using namespace std;

// Structure to represent a bank account
struct Account {
    string accountNumber;
    string accountHolderName;
    double balance;
};

// Class to represent the banking system
class BankingSystem {
private:
    map<string, Account> accounts;

public:
    // Function to create a new account
    void createAccount() {
        Account newAccount;
        cout << "Enter account number: ";
        cin >> newAccount.accountNumber;
        cout << "Enter account holder name: ";
        cin.ignore();
        getline(cin, newAccount.accountHolderName);
        newAccount.balance = 0.0;
        accounts[newAccount.accountNumber] = newAccount;
        cout << "Account created successfully!" << endl;
    }

    // Function to deposit money into an account
    void depositMoney() {
        string accountNumber;
        double amount;
        cout << "Enter account number: ";
        cin >> accountNumber;
        if (accounts.find(accountNumber) != accounts.end()) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            accounts[accountNumber].balance += amount;
            cout << "Deposit successful! New balance: " << accounts[accountNumber].balance << endl;
        } else {
            cout << "Account not found!" << endl;
        }
    }

    // Function to withdraw money from an account
    void withdrawMoney() {
        string accountNumber;
        double amount;
        cout << "Enter account number: ";
        cin >> accountNumber;
        if (accounts.find(accountNumber) != accounts.end()) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (accounts[accountNumber].balance >= amount) {
                accounts[accountNumber].balance -= amount;
                cout << "Withdrawal successful! New balance: " << accounts[accountNumber].balance << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        } else {
            cout << "Account not found!" << endl;
        }
    }

    // Function to display account details
    void displayAccountDetails() {
        string accountNumber;
        cout << "Enter account number: ";
        cin >> accountNumber;
        if (accounts.find(accountNumber) != accounts.end()) {
            cout << "Account Number: " << accounts[accountNumber].accountNumber << endl;
            cout << "Account Holder Name: " << accounts[accountNumber].accountHolderName << endl;
            cout << "Balance: " << accounts[accountNumber].balance << endl;
        } else {
            cout << "Account not found!" << endl;
        }
    }

    // Function to display all accounts
    void displayAllAccounts() {
        if (accounts.empty()) {
            cout << "No accounts found!" << endl;
        } else {
            for (auto& account : accounts) {
                cout << "Account Number: " << account.second.accountNumber << endl;
                cout << "Account Holder Name: " << account.second.accountHolderName << endl;
                cout << "Balance: " << account.second.balance << endl;
                cout << endl;
            }
        }
    }
};

int main() {
    BankingSystem bankingSystem;
    int choice;
    do {
        cout << "Banking System Menu:" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Display Account Details" << endl;
        cout << "5. Display All Accounts" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                bankingSystem.createAccount();
                break;
            case 2:
                bankingSystem.depositMoney();
                break;
            case 3:
                bankingSystem.withdrawMoney();
                break;
            case 4:
                bankingSystem.displayAccountDetails();
                break;
            case 5:
                bankingSystem.displayAllAccounts();
                break;
            case 6:
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
    return 0;
}

