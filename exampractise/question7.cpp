#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string name;
    float balance;

    // Parameterized constructor
    Account(string n, float b) {
        name = n;
        balance = b;
    }

    // Function to transfer amount
    void transferAmount(Account &receiver, float amount) {
        if (balance >= amount) {
            balance -= amount;
            receiver.balance += amount;
            cout << "Transferred Rs. " << amount << " from " << name
                 << " to " << receiver.name << endl;
        } else {
            cout << "Insufficient balance in sender account!\n";
        }
    }

    // Function to display account details
    void display() {
        cout << "Account Holder: " << name << ", Balance: Rs. " << balance << endl;
    }
};

int main() {
    cout << "=== Bank Account Transfer System ===\n";

    // Creating two account objects
    Account acc1("Alice", 5000);
    Account acc2("Bob", 3000);

    // Display initial balances
    cout << "\nInitial Account Details:\n";
    acc1.display();
    acc2.display();

    // Transfer money
    cout << "\nTransferring Rs. 1500 from Alice to Bob...\n";
    acc1.transferAmount(acc2, 1500);

    // Display balances after transfer
    cout << "\nUpdated Account Details:\n";
    acc1.display();
    acc2.display();

    return 0;
}
