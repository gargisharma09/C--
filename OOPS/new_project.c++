#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Courier {
private:
    int id;
    string sender, receiver, status;
    float weight, distance, fee;

public:
    Courier(string s, string r, float w, float d) {
        id = rand() % 9000 + 1000; // Generate a random 4-digit tracking ID
        sender = s;
        receiver = r;
        weight = w;
        distance = d;
        fee = (weight * 10) + (distance * 5);
        status = "In Transit";
        cout << "Courier Added with Tracking ID: " << id << "\n";
    }

    int getId() const { return id; }
    string getStatus() const { return status; }
    void setStatus(const string &newStatus) { status = newStatus; }

    void display() const {
        cout << "Courier ID: " << id << "\n";
        cout << "Sender: " << sender << "\n";
        cout << "Receiver: " << receiver << "\n";
        cout << "Weight: " << weight << " kg\n";
        cout << "Distance: " << distance << " km\n";
        cout << "Fee: $" << fee << "\n";
        cout << "Status: " << status << "\n";
    }

    void generateReceipt() const {
        cout << "\n---- Receipt ----\n";
        cout << "Tracking ID: " << id << "\n";
        cout << "Sender: " << sender << "\n";
        cout << "Receiver: " << receiver << "\n";
        cout << "Weight: " << weight << " kg\n";
        cout << "Distance: " << distance << " km\n";
        cout << "Total Fee: $" << fee << "\n";
        cout << "Status: " << status << "\n";
        cout << "-----------------\n";
    }
};

class CourierSystem {
private:
    vector<Courier> couriers;
    const int userId = 1234, pass = 5678;

public:
    CourierSystem() { srand(time(0)); } // Initialize random seed

    bool login() {
        int id, password;
        cout << "Enter User ID: "; cin >> id;
        cout << "Enter Password: "; cin >> password;
        return (id == userId && password == pass);
    }

    void addCourier() {
        string sender, receiver; float weight, distance;
        cin.ignore(); // Clear input buffer
        cout << "Enter Sender Name: ";
        getline(cin, sender);
        cout << "Enter Receiver Name: ";
        getline(cin, receiver);
        cout << "Enter Weight (kg): ";
        cin >> weight;
        cout << "Enter Distance (km): ";
        cin >> distance;
        Courier c(sender, receiver, weight, distance);
        couriers.push_back(c);
        c.generateReceipt();
    }

    void trackCourier() {
        int searchId; cout << "Enter Courier ID to track: "; cin >> searchId;
        for (const auto &c : couriers) {
            if (c.getId() == searchId) {
                c.display();
                return;
            }
        }
        cout << "Courier Not Found!\n";
    }

    void updateStatus() {
        int searchId; string newStatus;
        cout << "Enter Courier ID and New Status: "; cin >> searchId;
        cin.ignore(); // Clear input buffer
        getline(cin, newStatus);
        for (auto &c : couriers) {
            if (c.getId() == searchId) {
                c.setStatus(newStatus);
                cout << "Status Updated Successfully!\n";
                return;
            }
        }
        cout << "Courier Not Found!\n";
    }

    void displayAllCouriers() {
        if (couriers.empty()) {
            cout << "No Couriers Available!\n";
            return;
        }
        for (const auto &c : couriers) {
            c.display();
        }
    }

    void menu() {
        if (!login()) {
            cout << "Invalid Login! Exiting...\n";
            return;
        }
        int choice;
        do {
            cout << "\n==============================\n";
            cout << "|      COURIER SYSTEM MENU     |\n";
            cout << "==============================\n";
            cout << "| 1. Add Courier              |\n";
            cout << "| 2. Track Courier            |\n";
            cout << "| 3. Update Status            |\n";
            cout << "| 4. Display All Couriers     |\n";
            cout << "| 5. Exit                     |\n";
            cout << "==============================\n";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1: addCourier(); break;
                case 2: trackCourier(); break;
                case 3: updateStatus(); break;
                case 4: displayAllCouriers(); break;
                case 5: cout << "Exiting...\n"; break;
                default: cout << "Invalid choice!\n";
            }
        } while (choice != 5);
    }
};

int main() {
    CourierSystem system;
    system.menu();
    return 0;
}