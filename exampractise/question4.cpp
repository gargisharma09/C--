#include<iostream>
#include<string>
using namespace std;
class Room {
    private:
        string type;
        bool ac;
    public:
        Room() { // Default constructor
            type = "Standard";
            ac = false;
        }
        Room(string t, bool a) { // Parameterized constructor
            type = t;
            ac = a;
        }
        void display() {
            cout << "Room Type: " << type << ", AC: " << (ac ? "Yes" : "No") << endl;
        }
    };