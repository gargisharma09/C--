#include <iostream>
#include <vector>
using namespace std;

// Base Class
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

// Derived Class - Student
class Student : public Person {
private:
    int roll_no;
    string course;
public:
    void setStudent(string n, int a, int r, string c) {
        setPerson(n, a);
        roll_no = r;
        course = c;
    }
    void displayStudent() {
        displayPerson();
        cout << "Roll No: " << roll_no << ", Course: " << course << endl;
    }
};

// Derived Class - Faculty
class Faculty : public Person {
private:
    int faculty_id;
    string subject;
public:
    void setFaculty(string n, int a, int id, string sub) {
        setPerson(n, a);
        faculty_id = id;
        subject = sub;
    }
    void displayFaculty() {
        displayPerson();
        cout << "Faculty ID: " << faculty_id << ", Subject: " << subject << endl;
    }
};

// Main Function
int main() {
    vector<Student> students;
    vector<Faculty> faculties;
    int choice;

    do {
        cout << "\n=== University Management System ===" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Add Faculty" << endl;
        cout << "3. Display Students" << endl;
        cout << "4. Display Faculty" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // Clear newline character from input buffer

        if (choice == 1) {
            string name, course;
            int age, roll;
            cout << "Enter Student Name: ";
            getline(cin, name);
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Roll No: ";
            cin >> roll;
            cin.ignore();
            cout << "Enter Course: ";
            getline(cin, course);

            Student s;
            s.setStudent(name, age, roll, course);
            students.push_back(s);
        }
        else if (choice == 2) {
            string name, subject;
            int age, id;
            cout << "Enter Faculty Name: ";
            getline(cin, name);
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Faculty ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Subject: ";
            getline(cin, subject);

            Faculty f;
            f.setFaculty(name, age, id, subject);
            faculties.push_back(f);
        }
        else if (choice == 3) {
            cout << "\n--- Student List ---" << endl;
            for (size_t i = 0; i < students.size(); i++) {
                cout << "Student #" << i + 1 << ":" << endl;
                students[i].displayStudent();
                cout << "------------------------" << endl;
            }
        }
        else if (choice == 4) {
            cout << "\n--- Faculty List ---" << endl;
            for (size_t i = 0; i < faculties.size(); i++) {
                cout << "Faculty #" << i + 1 << ":" << endl;
                faculties[i].displayFaculty();
                cout << "------------------------" << endl;
            }
        }
        else if (choice != 0) {
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    cout << "Exiting University Management System." << endl;
    return 0;
}
