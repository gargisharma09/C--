#include <iostream>
using namespace std;

class Train {
private:
    int seats;

public:
    // Constructor to initialize available seats
    Train(int s) {
        seats = s;
    }

    // Function to check availability and book ticket if possible
    bool checkAvailability() {
        if (seats > 0) {
            bookTicket();
            return true;
        } else {
            cout << "No seats available!\n";
            return false;
        }
    }

    // Function to book a ticket
    void bookTicket() {
        seats--;
        cout << "Ticket booked successfully. Remaining seats: " << seats << endl;
    }
};

int main() {
    cout << "=== Train Reservation System ===" << endl;

    int totalSeats = 3; // Example: 3 seats available
    Train express(totalSeats);

    // Simulate ticket booking attempts
    for (int i = 1; i <= 4; ++i) {
        cout << "\nAttempt " << i << ": ";
        express.checkAvailability();
    }

    return 0;
}
