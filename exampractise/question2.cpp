#include <iostream>
using namespace std;

class PetrolPump {
    const float price_per_litre = 100.0f; // Constant price
public:
    void calculateTotal(int litres) {
        float total = litres * price_per_litre;
        cout << "Total amount: Rs. " << total << endl;
    }
};

int main() {
    PetrolPump pump;
    int litres;

    cout << "====== Petrol Pump Billing System ======" << endl;
    cout << "Enter number of litres you want to purchase: ";
    cin >> litres;

    if (litres > 0) {
        pump.calculateTotal(litres);
    } else {
        cout << "Invalid input. Litres must be greater than 0." << endl;
    }

    return 0;
}
