/*#include <iostream>
using namespace std;

int main(){
    int age = 22;
    int *ptr= &age;
    int _age= *ptr;
    cout<<"Age: "<<age<<endl;
    cout<<"Pointer: "<<ptr<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main(){
    int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    cout << "Value of x: " << x << endl;
    cout << "Value of *ptr: " << *ptr << endl;

    *ptr += 5;
    cout << "Value of x : " << x << endl;
    cout << "*ptr: " << *ptr << endl;

    (*ptr)++;
    cout << "Value of x : " << x << endl;
    cout << "*ptr: " << *ptr << endl;

    return 0;
}*/
/*Call by value : when we pass value of variable as arguments 
#include <iostream>
using namespace std;   

void square(int n);

int main(){
    int  number= 4;
    square(number);
    cout << "Number: " << number << endl;       
    return 0;
}

void square(int n){
    n = n*n;
    cout << "Square: " << n << endl;
}*/
/*Call by reference : when we pass address of variable as arguments
#include<iostream>
using namespace std;   

void square(int *n);

int main(){
    int  number= 4;
    square(&number);
    cout << "number: " << number << endl;       
    return 0;
}

void square(int *n){
    *n = (*n) * (*n);
    cout << "Square: " << *n << endl;
}*/
#include <iostream>
using namespace std;    

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

int main() {
    int x = 3, y = 5;
    swap(x, y); // call by value
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    return 0;   
}
