// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;
//  if (a > b && a < c || a < b && a > c) {
//         cout << "The middle number is: " << a << endl;
//     }
//     else if (b > a && b < c || b < a && b > c) {
//         cout << "The middle number is: " << b << endl;
//     }
//     else {
//         cout << "The middle number is: " << c << endl;
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int amount;
//     cout<<"enter the amount : ";
//     cin>>amount;
//     if(amount>=1000)
//     {
//         cout<<"you are eligible for 10%  discount\n";
//         // int b =amount-(10/100*100);
//         // cout<<b;

//     }
//     else if(amount>=500 && amount<1000){
//         cout<<"you are eligible for 5% discount\n ";
//         // int c=amount-(5/100)*100;
//         // cout<<c;

//     }
//     else{
//         cout<<"not eligible for discount";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    int operater;
    cout<<"choose a operator:  1: +  \n2= -\n 3= / \n4= *\n";
    cin>> operater;

    switch(operater){
        case 1:
        cout<<a+b;
        break;

        case 2:
        cout<<a-b;
        break;

        case 3:
        cout<<a/b;
        break;

        case 4: 
        cout<<a*b;
        break;

        default:
        cout<<"enter correct operand: ";
        
        


        
    }
    return 0;
}