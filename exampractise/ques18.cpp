#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;

public:
    void input() {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    void compare(Employee e) {
        if (id == e.id) {
            cout << "IDs are equal.\n";
        } else {
            cout << "IDs are different.\n";
        }
    }
};

int main() {
    Employee e[2];
    for (int i = 0; i < 2; i++) {
        e[i].input();
    }

    e[0].display();
    e[1].display();
    e[0].compare(e[1]);

    return 0;
}
