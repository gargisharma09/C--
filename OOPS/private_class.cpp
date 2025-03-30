#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept) {
        dept = newDept;
    }

public:
    
    void setName(string n) {
        name = n;
    }

    void setDept(string d) {
        dept = d;
    }

    void setSubject(string s) {
        subject = s;
    }

    void setSalary(double s) {
        salary = s;
    }

    string getName() {
        return name;
    }

    string getDept() {
        return dept;
    }

    string getSubject() {
        return subject;
    }

    double getSalary() {
        return salary;
    }

};

int main() {
    Teacher t1;

    t1.setName("Shradha");
    t1.setSubject("C++");
    t1.setDept("Computer Science");
    t1.setSalary(20000);


    cout << t1.getName() << endl;
    return 0;
}
