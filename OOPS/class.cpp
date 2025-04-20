/*#include <iostream>
using namespace std;

class Student{
    string name;
    int rollno;
    int regno;

public:
    // Getting details from Arguments
    int getDetails(string n, int r, int reg){
        name = n;
        rollno = r;
        regno = reg;
    }
    // Getting details from User
    int getDetailsuser(){
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Roll No: ";
        cin >> rollno;
        cout << "Enter the Registration no: ";
        cin >> regno;
    }

    void displayDetails(){
        cout << "Name: " << endl;
        cout << "Roll No: " << endl;
        cout << "Registration No: " << endl;
    }

};

int main(){
    Student s1;
    s1.getDetailsuser();
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class Teacher{
    //properties/ attributes
private:
    string name;
    string dept;
    string salary;

    //methods
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t1;
    t1.name = "gargi";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.salary = 25000;

    cout<<t1.name << endl;
    
    return 0;
}*/
// access modifier 
// 1. private: data & methods accessible inside class only
// 2. public:data & methods accessible to everyone 
// 3. protected : data &method accessile inside and to its derived class


