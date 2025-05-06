#include <iostream>
#include <fstream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void input() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Doctor : virtual public Person {
protected:
    string specialization;
public:
    void inputDoctor() {
        input();
        cout << "Enter specialization: ";
        cin >> specialization;
    }
};

class Patient : virtual public Person {
protected:
    string disease;
public:
    void inputPatient() {
        input();
        cout << "Enter disease: ";
        cin >> disease;
    }
};

class ResidentDoctor : public Doctor, public Patient {
public:
    void inputResidentDoctor() {
        inputDoctor(); // or inputPatient()
    }

    void save() {
        ofstream out("hospital.txt", ios::app);
        out << "Name: " << name << ", Age: " << age
            << ", Specialization: " << specialization
            << ", Disease: " << disease << "\n";
        out.close();
    }

    void displayResident() {
        display();
        cout << "Specialization: " << specialization << ", Disease: " << disease << endl;
    }
};

int main() {
    ResidentDoctor r;
    r.inputResidentDoctor();
    r.save();
    r.displayResident();
    return 0;
}
