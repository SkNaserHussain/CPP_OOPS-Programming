//Write a C++ code to implement the ATM system//
#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
    string accountNumber;
    string accountHolderName;
    double balance;
    int pin;

    
    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: $";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: $";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully!" << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void transfer(ATM &recipient) {
        double amount;
        cout << "Enter amount to transfer: $";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            recipient.balance += amount;
            cout << "$" << amount << " transferred successfully to " << recipient.accountHolderName << "!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid transfer amount!" << endl;
        }
    }

public:
    
    ATM(string accNumber, string name, double initialBalance, int accountPin) 
        : accountNumber(accNumber), accountHolderName(name), balance(initialBalance), pin(accountPin) {}

    
    bool verifyPin(int enteredPin) {
        return enteredPin == pin;
    }

    
    void showMenu() {
        int choice;
        do {
            cout << "\n--- ATM Menu ---" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Transfer Money" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    checkBalance();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4: {
                    string recipientAccNumber;
                    cout << "Enter recipient's account number: ";
                    cin >> recipientAccNumber;

                    
                    ATM recipient(recipientAccNumber, "Recipient", 0.0, 1234);  
                    transfer(recipient);
                    break;
                }
                case 5:
                    cout << "Thank you for using the ATM. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        } while (choice != 5);
    }
};

int main() {
    
    string accountNumber = "123456789";
    string accountHolderName = "John Doe";
    double initialBalance = 1000.0;
    int pin = 1234;

    ATM userAccount(accountNumber, accountHolderName, initialBalance, pin);

    int enteredPin;
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    
    if (userAccount.verifyPin(enteredPin)) {
        userAccount.showMenu();
    } else {
        cout << "Invalid PIN!" << endl;
    }

    return 0;
}