#include <iostream>
#include <string>
using namespace std;

class ShoppingCart {
public:
    string productName;
    float price;

   
    ShoppingCart(string name, float price) {
        productName = name; 
       price = price;
        cout << "Product added to cart: " << productName << " with price " << price << endl;
    }

 
    ~ShoppingCart() {
        cout << "Product removed from cart: " << productName << endl;
    }

   
    void display() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    ShoppingCart cart1("Laptop", 999.99);
    cart1.display();

    ShoppingCart cart2("Smartphone", 699.99);
    cart2.display();

    return 0;
}