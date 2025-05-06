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