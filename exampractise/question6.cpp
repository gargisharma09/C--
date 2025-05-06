#include <iostream>
using namespace std;

class CurrencyConverter {
public:
    void convert(float usd) {
        float rate = 83.5f; // USD to INR conversion rate
        float inr = usd * rate;
        int rounded_inr = static_cast<int>(inr + 0.5f); // Rounding to nearest integer
        cout << "Amount in INR (rounded): Rs. " << rounded_inr << endl;
    }
};

int main() {
    CurrencyConverter converter;
    float usd;

    cout << "=== Currency Converter (USD to INR) ===" << endl;
    cout << "Enter amount in USD: ";
    cin >> usd;

    if (usd >= 0) {
        converter.convert(usd);
    } else {
        cout << "Invalid amount. Please enter a non-negative value." << endl;
    }

    return 0;
}
