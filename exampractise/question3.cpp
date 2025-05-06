#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Car object is created. Rental period has started.\n";
    }

    ~Car() {
        cout << "Car object is destroyed. Rental period is over.\n";
    }

    void drive() {
        cout << "The car is being driven.\n";
    }
};

int main() {
    cout << "Entering main function...\n";
    
    {
        Car rentalCar;  // Object created
        rentalCar.drive();
    }  // Object goes out of scope here, destructor is called

    cout << "Exiting main function...\n";
    return 0;
}
