#include <iostream>
#include <fstream>
using namespace std;

class Product {
    int id;
    string name;
    float price;

public:
    void input() {
        cout << "Enter ID, Name, Price: ";
        cin >> id >> name >> price;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Price: " << price << endl;
    }

    void saveToFile() {
        ofstream file("products.txt", ios::app);
        file << id << " " << name << " " << price << "\n";
        file.close();
    }
};

int main() {
    Product p;
    p.input();
    p.saveToFile();
    cout << "Product saved to file.\n";
    return 0;
}
