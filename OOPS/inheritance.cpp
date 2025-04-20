#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;

    Vehicle(string b) {
        brand = b;
        cout << "Vehicle constructor called for brand: " << brand << endl;
    }

    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};


class Car : public Vehicle {
public:
    string model;

   
    Car(string b, string m) : Vehicle(b) { 
        model = m;
        cout << "Car constructor called for model: " << model << endl;
    }

    void displayDetails() {
        displayBrand();
        cout << "Model: " << model << endl;
    }
};

int main() {
   
    Car myCar("Toyota", "Hyundai");
    myCar.displayDetails();

    return 0;
}
