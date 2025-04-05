#include <iostream>
#include <vector>
using namespace std;

class Courier {
private:
    static int nextId;
    int id;
    string sender, receiver, status;
    float weight, distance, fee;

public:
    Courier(string s, string r, float w, float d) {
        id = nextId++;
        sender = s;
        receiver = r;
        weight = w;
        distance = d;
        fee = (weight * 10) + (distance * 5);
        status = "In Transit";
    }

    int getId() { return id; }

    void display() {
        cout << "\n----------------------------------\n";
        cout << "         Courier Details\n";
        cout << "----------------------------------\n";
        cout << "ID        : " << id << "\n";
        cout << "Sender    : " << sender << "\n";
        cout << "Receiver  : " << receiver << "\n";
        cout << "Weight    : " << weight << " kg\n";
        cout << "Distance  : " << distance << " km\n";
        cout << "Fee       : $" << fee << "\n";
        cout << "Status    : " << status << "\n";
        cout << "----------------------------------\n";
    }

    void setStatus(string s) { status = s; }
};

int Courier::nextId = 1000;

class CourierSystem {
private:
    vector<Courier> couriers;

public:
    void addCourier() {
        string sender, receiver;
        float weight, distance;

        cin.ignore();
        cout << "Enter Sender Name   : ";
        getline(cin, sender);
        cout << "Enter Receiver Name : ";
        getline(cin, receiver);
        cout << "Enter Weight (kg)   : ";
        cin >> weight;
        cout << "Enter Distance (km) : ";
        cin >> distance;

        Courier c(sender, receiver, weight, distance);
        couriers.push_back(c);
        cout << "\nCourier Added Successfully!\n";
        c.display();
    }

    void trackCourier() {
        int id;
        cout << "Enter Courier ID to track: ";
        cin >> id;

        for (auto &c : couriers) {
            if (c.getId() == id) {
                c.display();
                return;
            }
        }
        cout << "Courier not found.\n";
    }

    void updateStatus() {
        int id;
        string status;
        cout << "Enter Courier ID to update: ";
        cin >> id;
        cin.ignore();
        cout << "Enter new status: ";
        getline(cin, status);

        for (auto &c : couriers) {
            if (c.getId() == id) {
                c.setStatus(status);
                cout << "Status updated successfully!\n";
                return;
            }
        }
        cout << "Courier not found.\n";
    }

    void displayAll() {
        if (couriers.empty()) {
            cout << "No couriers available.\n";
            return;
        }
        for (auto &c : couriers) {
            c.display();
        }
    }

    void menu() {
        int choice;
        do {
            cout << "\n=====================================\n";
            cout << "          COURIER SYSTEM MENU        \n";
            cout << "=====================================\n";
            cout << " 1. Add Courier\n";
            cout << " 2. Track Courier\n";
            cout << " 3. Update Courier Status\n";
            cout << " 4. Display All Couriers\n";
            cout << " 5. Exit\n";
            cout << "=====================================\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: addCourier(); break;
                case 2: trackCourier(); break;
                case 3: updateStatus(); break;
                case 4: displayAll(); break;
                case 5: cout << "Exiting Courier System. Goodbye!\n"; break;
                default: cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 5);
    }
};

int main() {
    CourierSystem system;
    system.menu();
    return 0;
}