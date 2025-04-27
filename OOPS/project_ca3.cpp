#include <iostream>
using namespace std;
    
// Base class
class Person
{
protected:
    string name;

public:
    Person() {}
    Person(string n) : name(n) {}
    string getName() { return name; }
};

// Courier class
class Courier : public Person
{
private:
    static int nextId;
    int id;
    string receiver, status;
    float weight, distance, fee;
    string priority;
    int rating; // Added rating field

public:
    Courier(string s, string r, float w = 1.0, float d = 1.0, string p = "Normal") : Person(s)
    {
        id = nextId++;
        receiver = r;
        weight = w;
        distance = d;
        priority = p;
        fee = (weight * 10) + (distance * 5);
        if (priority == "Express")
            fee *= 1.5;
        status = "In Transit";
        rating = 0; // Initialize rating
    }

    ~Courier()
    {
        cout << "Courier ID " << id << " removed from memory.\n";
    }

    int getId() { return id; }
    string getReceiver() { return receiver; }
    string getStatus() { return status; }
    string getPriority() { return priority; }
    void setStatus(string s) { status = s; }

    // Added rating methods
    void updateRating(int r)
    {
        if (r >= 1 && r <= 5)
        {
            rating = r;
            cout << "Rating updated to " << r << " stars!\n";
        }
        else
        {
            cout << "Invalid rating. Must be between 1-5.\n";
        }
    }
    int getRating() { return rating; }

    //     void display() {
    //         cout << "\n----------------------------------\n";
    //         cout << "         Courier Details\n";
    //         cout << "----------------------------------\n";
    //         cout << "ID        : " << id << "\n";
    //         cout << "Sender    : " << name << "\n";
    //         cout << "Receiver  : " << receiver << "\n";
    //         cout << "Weight    : " << weight << " kg\n";
    //         cout << "Distance  : " << distance << " km\n";
    //         cout << "Priority  : " << priority << "\n";
    //         cout << "Fee       : ₹" << fee << "\n";
    //         cout << "Status    : " << status << "\n";
    //         if (rating > 0) {
    //             cout << "Rating    : " << rating << " stars\n";
    //         }
    //         cout << "----------------------------------\n";
    //     }

    //     void printReceipt() {
    //         cout << "\n========== COURIER RECEIPT ==========\n";
    //         cout << "Courier ID  : " << id << "\n";
    //         cout << "Sender      : " << name << "\n";
    //         cout << "Receiver    : " << receiver << "\n";
    //         cout << "Weight      : " << weight << " kg\n";
    //         cout << "Distance    : " << distance << " km\n";
    //         cout << "Fee         : ₹" << fee << "\n";
    //         cout << "Status      : " << status << "\n";
    //         if (rating > 0) {
    //             cout << "Rating      : " << rating << " stars\n";
    //         }
    //         cout << "=====================================\n";
    //     }
    // };

    void display()
    {
        cout << "\n";
        cout << "\033[1;36m----------------------------------\033[0m\n";
        cout << "\033[1;36m         \033[1;35mCourier Details\033[0m         \033[1;36m\033[0m\n";
        cout << "\033[1;36m----------------------------------\033[0m\n";
        cout << "\033[1;33mID        \033[0m: " << id << "\n";
        cout << "\033[1;33mSender    \033[0m: \033[1;32m" << name << "\033[0m\n";
        cout << "\033[1;33mReceiver  \033[0m: \033[1;32m" << receiver << "\033[0m\n";
        cout << "\033[1;33mWeight    \033[0m: \033[1;34m" << weight << " kg\033[0m\n";
        cout << "\033[1;33mDistance  \033[0m: \033[1;34m" << distance << " km\033[0m\n";
        cout << "\033[1;33mPriority  \033[0m: ";
        if (priority == "Express")
        {
            cout << "\033[1;31m" << priority << "\033[0m\n";
        }
        else
        {
            cout << "\033[1;32m" << priority << "\033[0m\n";
        }
        cout << "\033[1;33mFee       \033[0m: \033[1;35m₹" << fee << "\033[0m\n";
        cout << "\033[1;33mStatus    \033[0m: ";
        if (status == "Delivered")
        {
            cout << "\033[1;32m" << status << "\033[0m\n";
        }
        else
        {
            cout << "\033[1;33m" << status << "\033[0m\n";
        }
        if (rating > 0)
        {
            cout << "\033[1;33mRating    \033[0m: ";
            // Different colors for different ratings
            if (rating >= 4)
                cout << "\033[1;32m";
            else if (rating >= 2)
                cout << "\033[1;33m";
            else
                cout << "\033[1;31m";
            cout << rating << " stars\033[0m\n";
        }
        cout << "\033[1;36m----------------------------------\033[0m\n";
    }

    void printReceipt()
    {
        cout << "\n";
        cout << "\033[1;35m========== \033[1;36mCOURIER RECEIPT\033[1;35m ==========\033[0m\n";
        cout << "\033[1;33mCourier ID  \033[0m: " << id << "\n";
        cout << "\033[1;33mSender      \033[0m: \033[1;32m" << name << "\033[0m\n";
        cout << "\033[1;33mReceiver    \033[0m: \033[1;32m" << receiver << "\033[0m\n";
        cout << "\033[1;33mWeight      \033[0m: \033[1;34m" << weight << " kg\033[0m\n";
        cout << "\033[1;33mDistance    \033[0m: \033[1;34m" << distance << " km\033[0m\n";
        cout << "\033[1;33mFee         \033[0m: \033[1;35m ₹ " << fee << "\033[0m\n";
        cout << "\033[1;33mStatus      \033[0m: ";
        if (status == "Delivered")
        {
            cout << "\033[1;32m" << status << "\033[0m\n";
        }
        else
        {
            cout << "\033[1;33m" << status << "\033[0m\n";
        }
        if (rating > 0)
        {
            cout << "\033[1;33mRating      \033[0m: ";
            // Different colors for different ratings
            if (rating >= 4)
                cout << "\033[1;32m";
            else if (rating >= 2)
                cout << "\033[1;33m";
            else
                cout << "\033[1;31m";
            cout << rating << " stars\033[0m\n";
        }
        cout << "\033[1;35m=====================================\033[0m\n";
    }
    // \033[1;36m - Bright Cyan (for borders and headers)

    //     \033[1;35m - Bright Purple (for receipt header)

    //     \033[1;33m - Bright Yellow (for field names)

    //     \033[1;32m - Bright Green (for positive values like Delivered status, good ratings)

    //     \033[1;34m - Bright Blue (for numeric measurements)

    //     \033[1;31m - Bright Red (for Express priority, low ratings)

    //     \033[0m - Reset to default
};
int Courier::nextId = 1000;

class CourierSystem
{
private:
    static const int MAX = 100;
    Courier *couriers[MAX];
    int count = 0;

public:
    ~CourierSystem()
    {
        for (int i = 0; i < count; i++)
        {
            delete couriers[i];
        }
    }

    void addCourier()
    {
        if (count >= MAX)
        {
            cout << "Storage Full!\n";
            return;
        }

        string sender, receiver, priority;
        float weight, distance;

        cin.ignore();
        cout << "Sender Name: ";
        getline(cin, sender);
        cout << "Receiver Name: ";
        getline(cin, receiver);
        cout << "Weight (kg): ";
        cin >> weight;
        cout << "Distance (km): ";
        cin >> distance;
        cin.ignore();
        cout << "Priority (Normal/Express): ";
        getline(cin, priority);

        Courier *c = new Courier(sender, receiver, weight, distance, priority);
        couriers[count++] = c;
        cout << "Courier Added!\n";
        c->printReceipt();
    }

    void trackCourier()
    {
        int id;
        cout << "Enter ID to track: ";
        cin >> id;
        for (int i = 0; i < count; i++)
        {
            if (couriers[i]->getId() == id)
            {
                couriers[i]->display();
                return;
            }
        }
        cout << "Courier not found.\n";
    }

    void updateStatus()
    {
        int id;
        string status;
        cout << "Enter ID to update: ";
        cin >> id;
        cin.ignore();
        cout << "New Status: ";
        getline(cin, status);
        for (int i = 0; i < count; i++)
        {
            if (couriers[i]->getId() == id)
            {
                couriers[i]->setStatus(status);
                cout << "Status Updated!\n";
                return;
            }
        }
        cout << "Courier not found.\n";
    }

    void showExpressCouriers()
    {
        bool found = false;
        for (int i = 0; i < count; i++)
        {
            if (couriers[i]->getPriority() == "Express")
            {
                couriers[i]->display();
                found = true;
            }
        }
        if (!found)
            cout << "No express couriers found.\n";
    }
    

    void displayAll()
    {
        if (count == 0)
        {
            cout << "No couriers yet.\n";
            return;
        }
        for (int i = 0; i < count; i++)
        {
            couriers[i]->display();
        }
    }

    void rateCourier()
    {
        int id, rating;
        cout << "Enter ID to rate: ";
        cin >> id;
        for (int i = 0; i < count; i++)
        {
            if (couriers[i]->getId() == id)
            {
                if (couriers[i]->getStatus() != "Delivered")
                {
                    cout << "Only delivered couriers can be rated!\n";
                    return;
                }
                cout << "Enter rating (1-5 stars): ";
                cin >> rating;
                couriers[i]->updateRating(rating);
                return;
            }
        }
       
        cout << "Courier not found.\n";
    }

    void menu()
    {
        int choice;
        do
        {
            cout << "\n";
            cout << "\033[1;36m=================================================\033[0m\n";
            cout << "\033[1;36m|\033[1;35m           COURIER MANAGEMENT SYSTEM           \033[1;36m|\033[0m\n";
            cout << "\033[1;36m=================================================\033[0m\n";
            cout << "\033[1;36m|                                               |\033[0m\n";
            cout << "\033[1;36m|  \033[1;33m1.\033[0m Add Courier      \033[1;33m2.\033[0m Track Courier      \033[1;36m   |\033[0m\n";
            cout << "\033[1;36m|  \033[1;33m3.\033[0m Update Status    \033[1;33m4.\033[0m Express Couriers   \033[1;36m   |\033[0m\n";
            cout << "\033[1;36m|  \033[1;33m5.\033[0m Display All      \033[1;33m6.\033[0m Rate Courier      \033[1;36m    |\033[0m\n";
            cout << "\033[1;36m|  \033[1;33m7.\033[0m Exit                                 \033[1;36m     |\033[0m\n";
            cout << "\033[1;36m|                                               |\033[0m\n";
            cout << "\033[1;36m=================================================\033[0m\n";
            cout << "  Enter your choice (1-7): ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                addCourier();
                break;
            case 2:
                trackCourier();
                break;
            case 3:
                updateStatus();
                break;
            case 4:
                showExpressCouriers();
                break;
            case 5:
                displayAll();
                break;
            case 6:
                rateCourier();
                break;
            case 7:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 7);
    }
};

int main()
{
    CourierSystem system;
    system.menu();
    return 0;
}