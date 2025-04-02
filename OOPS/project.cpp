#include <iostream>
#include <vector>
#include <string>
#include <limits> // Added for numeric_limits
using namespace std;

class Courier {
private:
    static int totalCouriers; // Static data member to track total entries
    int trackingID;
    string sender;
    string receiver;
    string location;
    string status;

public:
    // Constructor
    Courier(string s, string r, string loc, int id) {
        trackingID = id;
        sender = s;
        receiver = r;
        location = loc;
        if (id == 123)
            status = "Dispatched";
        else if (id == 456)
            status = "Received";
        else if (id == 789)
            status = "Packing";
        else
            status = "Unknown";
        
        cout << "\nCourier added successfully!\n";
        displayDetails();
    }

    // Function to display courier details
    void displayDetails() const {
        cout << "\n----------------------------------" << endl;
        cout << "Tracking ID: " << trackingID << endl;
        cout << "Sender: " << sender << endl;
        cout << "Receiver: " << receiver << endl;
        cout << "Current Location: " << location << endl;
        cout << "Status: " << status << endl;
        cout << "----------------------------------\n" << endl;
    }

    // Getter functions
    int getTrackingID() const { return trackingID; }
    string getReceiver() const { return receiver; }
};

// Static data member initialization
int Courier::totalCouriers = 0;

// Function overloading to retrieve courier details
void findCourier(const vector<Courier> &couriers, int id) {
    for (const auto &c : couriers) {
        if (c.getTrackingID() == id) {
            cout << "\nTracking ID: " << c.getTrackingID() << "\nStatus: Received\n";
            return;
        }
    }
    cout << "\nCourier not found. Please check the Tracking ID and try again.\n";
}

void findCourier(const vector<Courier> &couriers, string receiver) {
    for (const auto &c : couriers) {
        if (c.getReceiver() == receiver) {
            cout << "\nReceiver: " << c.getReceiver() << "\nStatus: Received\n";
            return;
        }
    }
    cout << "\nCourier not found. Please check the Receiver's name and try again.\n";
}

int main() {
    vector<Courier> couriers;
    int choice;
    do {
        cout << "\n====== Courier Tracking System ======" << endl;
        cout << "1. Add New Courier" << endl;
        cout << "2. Search Courier by ID" << endl;
        cout << "3. Search Courier by Receiver" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        
        cin >> choice;
        if (cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "\nInvalid input! Please enter a number between 1 and 4.\n";
            continue;
        }
        cin.ignore(); // Ignore leftover newline

        switch (choice) {
            case 1: {
                string sender, receiver, location;
                int id;
                cout << "\nEnter Sender's Name: ";
                getline(cin, sender);
                cout << "Enter Receiver's Name: ";
                getline(cin, receiver);
                cout << "Enter Initial Location: ";
                getline(cin, location);
                cout << "Select Tracking ID (123, 456, 789): ";
                cin >> id;
                cin.ignore();
                if (id != 123 && id != 456 && id != 789) {
                    cout << "\nInvalid Tracking ID! Please use 123, 456, or 789.\n";
                    break;
                }
                couriers.push_back(Courier(sender, receiver, location, id));
                break;
            }
            case 2: {
                int id;
                cout << "\nEnter Tracking ID: ";
                cin >> id;
                if (cin.fail()) {
                    cin.clear(); // Clear error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                    cout << "\nInvalid input! Please enter a valid numeric Tracking ID.\n";
                    break;
                }
                findCourier(couriers, id);
                break;
            }
            case 3: {
                string receiver;
                cout << "\nEnter Receiver Name: ";
                getline(cin, receiver);
                findCourier(couriers, receiver);
                break;
            }
            case 4:
                cout << "\nExiting system. Thank you for using the Courier Tracking System!\n";
                break;
            default:
                cout << "\nInvalid choice! Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
