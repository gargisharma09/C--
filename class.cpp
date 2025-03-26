#include <iostream>
using namespace std;

class Student{
    string name;
    int rollno;
    int regno;

public:
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