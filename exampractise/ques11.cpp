#include <iostream>
using namespace std;

class Student {
    int marks[5];

public:
    void inputMarks() {
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    float calculateAverage() {
        return getTotal() / 5.0;
    }

private:
    int getTotal() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum;
    }
};

int main() {
    Student s;
    s.inputMarks();
    cout << "Average marks = " << s.calculateAverage() << endl;
    return 0;
}
