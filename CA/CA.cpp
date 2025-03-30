#include<iostream>
using namespace std;
int main() {
    int pass, HP = 100, z = 5;
    int n;
    cout << "LEVEL: 1 A ZOMBIE ARRIVED BE READY::" << endl;
    while (HP > 0) {
        cout << "\nCHOOSE A WEAPON TO ATTACK:\n1: SWORD\n2: GUN\n3: PUNCH";
        cin >> n;
        if (n == 1) {
            cout << "ATTACKED BY SWORD" << endl;
            cout << "SPLASH" << endl;
            HP -= 30;
            cout << "GOOD HIT!!" << endl;
        } else if (n == 2) {
            cout << "ATTACKED BY GUN" << endl;
            cout << "DHICHKIAUN" << endl;
            HP -= 50;
            cout << "CRITICAL HIT!!";
        } else if (n == 3) {
            cout << "ATTACK BY PUNCH" << endl;
            HP -= 10;
            cout << "UHHH!!\n";
        } else {
            cout << "INVALID CHOICE!\nRETRY!" << endl;
            continue;
        }
        if (HP > 0) {
            cout << "ZOMBIE STILL ALIVE! KEEP FIGHTING!" << endl;
        }
    }
    cout << "LEVEL 1 CLEARED! ZOMBIE DEFEATED!!" << endl;
    cout << "LEVEL 2! SURVIVE THE NIGHT!! ZOMBIES ARE COMING!!" << endl;
    cout << "INSTRUCTIONS" << endl;
    cout << "YOU HAVE 4 CHANCES TO KILL ONE ZOMBIE" << endl;
    cout << "TOTAL OF 5 ZOMBIES ARE COMING IN A ROW" << endl;
    cout << "BEST OF LUCK BE AWARE!" << endl;
    for (; z > 0; z--) {
        HP = 100;
        pass = 4; 
        while (HP > 0 && pass > 0) {
            cout << "MORE ZOMBIES STILL ALIVE! KEEP FIGHTING!" << endl;
            cout << "\nCHOOSE A WEAPON TO ATTACK:\n SWORD\n GUN\nPUNCH";
            cin >> n;
            if (n == 1) {
                cout << "ATTACKED BY SWORD" << endl;
                cout << "SPLASH" << endl;
                HP -= 30;
                cout << "EXCELLENT HIT!!" << endl;
            } else if (n == 2) {
                cout << "ATTACKED BY GUN" << endl;
                cout << "DICHKIAUN" << endl;
                HP -= 50;
                cout << "TUN";
            } else if (n == 3) {
                cout << "ATTACK BY PUNCH" << endl;
                HP -= 10;
                cout << "GOOD HIT!!";
            } else {
                cout << "INVALID CHOICE!\nRETRY!" << endl;
                continue;
            }
            pass--; 
        }
        if (pass == 0 ) {
            cout<<"0 CHANCES LEFT!";
            cout << "\nYOU WERE EATEN BY A ZOMBIE!!\nMISSION FAILED!" << endl;
         
        }
    cout << "\nYOU WERE EATEN" << endl;
    }
    cout << "YOU SURVIVED THE NIGHT!" << endl;
    return 0;}