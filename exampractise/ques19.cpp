#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateBonus() = 0;
};

class FullTime : public Employee {
    float salary;
    int years;
public:
    void input() {
        cout << "Enter salary and years of service: ";
        cin >> salary >> years;
    }
    void calculateBonus() {
        cout << "Bonus: " << 0.10 * salary * years << endl;
    }
};

class Contract : public Employee {
    int hours;
    float rate;
public:
    void input() {
        cout << "Enter hours worked and hourly rate: ";
        cin >> hours >> rate;
    }
    void calculateBonus() {
        cout << "Bonus: " << 0.05 * hours * rate << endl;
    }
};

class Intern : public Employee {
    float rating;
public:
    void input() {
        cout << "Enter performance rating (out of 10): ";
        cin >> rating;
    }
    void calculateBonus() {
        cout << "Bonus: " << 1000 * (rating / 10) << endl;
    }
};

int main() {
    int choice;
    Employee* emp;
    cout << "Choose employee type (1=FullTime, 2=Contract, 3=Intern): ";
    cin >> choice;

    if (choice == 1) {
        FullTime ft;
        ft.input();
        emp = &ft;
    } else if (choice == 2) {
        Contract ct;
        ct.input();
        emp = &ct;
    } else {
        Intern it;
        it.input();
        emp = &it;
    }

    emp->calculateBonus();
    return 0;
}
