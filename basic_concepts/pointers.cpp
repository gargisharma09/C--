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
/*Call by value */
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
}