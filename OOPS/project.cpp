#include <iostream>
#include <vector>
#include <string>
#include <limits> 
using namespace std;

class Courier {
private:
    static int totalCouriers; // Static data member to track total entries
    static int trackingSequence[3]; // Possible tracking IDs
    static int trackingIndex; // Index to rotate tracking IDs
    int trackingID;
    string sender;
    string receiver;
    string location;
    string status;

public:
    
    Courier(string s, string r, string loc) {
        trackingID = trackingSequence[trackingIndex];
        trackingIndex = (trackingIndex + 1) % 3; // Rotate tracking ID
        sender = s;
        receiver = r;
        location = loc;
        if (trackingID == 123)
            status = "Dispatched";
        else if (trackingID == 456)
            status = "Received";
        else if (trackingID == 789)
            status = "Packing";
        else
            status = "Unknown";
        
        cout << "\nCourier added successfully!\n";
        displayDetails();
    }

   
    void displayDetails() const {
        cout << "\n----------------------------------" << endl;
        cout << "Tracking ID: " << trackingID << endl;
        cout << "Sender: " << sender << endl;
        cout << "Receiver: " << receiver << endl;
        cout << "Current Location: " << location << endl;
        cout << "Status: " << status << endl;
        cout << "----------------------------------\n" << endl;
    }

    
    int getTrackingID() const { return trackingID; }
    string getReceiver() const { return receiver; }
};


int Courier::totalCouriers = 0;
int Courier::trackingSequence[3] = {123, 456, 789};
int Courier::trackingIndex = 0;

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
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "\nInvalid input! Please enter a number between 1 and 4.\n";
            continue;
        }
        cin.ignore(); 

        switch (choice) {
            case 1: {
                string sender, receiver, location;
                cout << "\nEnter Sender's Name: ";
                getline(cin, sender);
                cout << "Enter Receiver's Name: ";
                getline(cin, receiver);
                cout << "Enter Initial Location: ";
                getline(cin, location);
                couriers.push_back(Courier(sender, receiver, location));
                break;
            }
            case 2: {
                int id;
                cout << "\nEnter Tracking ID: ";
                cin >> id;
                if (cin.fail()) {
                    cin.clear(); 
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
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
