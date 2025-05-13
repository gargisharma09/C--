// Book Store Managemnet System 

#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int price;

public:
    void setDetails() {
        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author : ";
        cin >> author;

        cout << "Enter Price: ";
        cin >> price;

        auto validatePrice = [&]() {
            while (price < 0) {
                cout << "Invalid price enter correct price : ";
                cin >> price;
            }
        };

        validatePrice();  
    }

    friend void displayDetails(Book b);
};

void displayDetails(Book b) {
    cout << "\nBook Details" << endl;
    cout << "Title : " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price : " << b.price << endl;
}

int main() {
    Book b;
    b.setDetails();
    displayDetails(b);
    return 0;
}
