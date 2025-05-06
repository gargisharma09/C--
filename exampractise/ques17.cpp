#include <iostream>
using namespace std;

class Base {
protected:
    static int count;
public:
    Base() { count++; }
    static void showCount() {
        cout << "Object count: " << count << endl;
    }
};

int Base::count = 0;

class Derived1 : public Base {};
class Derived2 : public Base {};

int main() {
    Derived1 d1;
    Derived2 d2, d3;
    Base::showCount(); // Output should be 3
    return 0;
}
