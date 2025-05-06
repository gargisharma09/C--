#include <iostream>
using namespace std;

class BankAccount {
    string name, companyName;
    int accountNumber;
    float balance;

public:
    // Individual account with full details
    BankAccount(string n, int acc, float bal) : name(n), accountNumber(acc), balance(bal) {}

    // Individual with name and account number
    BankAccount(string n, int acc) : name(n), accountNumber(acc), balance(0) {}

    // Corporate account with company name only
    BankAccount(string company) : companyName(company), accountNumber(0), balance(0) {}

    void display() {
        if (!companyName.empty())
            cout << "Company: " << companyName << ", Account No: " << accountNumber << ", Balance: " << balance << endl;
        else
            cout << "Name: " << name << ", Account No: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount a1("John", 101, 5000.75);
    BankAccount a2("Alex", 102);
    BankAccount a3("TechCorp");

    a1.display();
    a2.display();
    a3.display();
    return 0;
}
