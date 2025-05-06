// Q1: University Management System
// =========================
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int roll_no;
    string course;
public:
    void setStudent(int r, string c) {
        roll_no = r;
        course = c;
    }
    void displayStudent() {
        displayPerson();
        cout << "Roll No: " << roll_no << ", Course: " << course << endl;
    }
};

class Faculty : public Person {
private:
    int faculty_id;
    string subject;
public:
    void setFaculty(int id, string sub) {
        faculty_id = id;
        subject = sub;
    }
    void displayFaculty() {
        displayPerson();
        cout << "Faculty ID: " << faculty_id << ", Subject: " << subject << endl;
    }
};
int main(){
return 0;
}