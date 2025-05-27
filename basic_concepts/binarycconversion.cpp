/*#include <iostream>
using namespace std;

int dectobinary(int decnum) {
    int ans=0, pow=1;

    while (decnum > 0) {
        int rem = decnum % 2;
        decnum /= 2;
        ans += rem * pow;
        pow *= 10;
        
    }
    return ans;
}

int main(){
    int decnum=50;

    for(int i = 0; i < 10; i++) {
        cout << "Decimal number: " << decnum << endl;
       
    }
    
    
    return 0;
}*/
// This code converts a decimal number to binary representation
/*
#include <iostream>
using namespace std;

// Function to convert decimal to binary
int dectobinary(int decnum) {
    if (decnum == 0) return 0; // Special case for 0

    int ans = 0, pow = 1;

    while (decnum > 0) {
        int rem = decnum % 2;
        decnum /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int main() {
    for (int decnum = 0; decnum <= 10; decnum++) {
        cout << "Decimal: " << decnum 
             << " -> Binary: " << dectobinary(decnum) << endl;
    }

    return 0;
}*/
