#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;
    int choice;

    cout << "1. Write\n2. Append\n3. Read\nChoice: ";
    cin >> choice;
    cin.ignore(); // flush newline

    if (choice == 1) {
        ofstream file("data.txt");
        cout << "Enter text to write: ";
        getline(cin, text);
        file << text << endl;
        file.close();
    } else if (choice == 2) {
        ofstream file("data.txt", ios::app);
        cout << "Enter text to append: ";
        getline(cin, text);
        file << text << endl;
        file.close();
    } else if (choice == 3) {
        ifstream file("data.txt");
        cout << "File content:\n";
        while (getline(file, text)) {
            cout << text << endl;
        }
        file.close();
    }

    return 0;
}
