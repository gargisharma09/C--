#include <iostream>
using namespace std;

class Employee {
public:
    void displayEmp() {
        cout << "Employee details...\n";
    }
};

class Student {
public:
    void displayStudent() {
        cout << "Student details...\n";
    }
};

// Hybrid Inheritance (multiple + hierarchical)
class PartTime : public Employee, public Student {
public:
    void displayPartTime() {
        cout << "Part-time worker (Employee + Student)\n";
    }
};

int main() {
    PartTime p;
    p.displayEmp();
    p.displayStudent();
    p.displayPartTime();
    return 0;
}
