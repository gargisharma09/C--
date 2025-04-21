/* call by value 
#include <iostream>
using namespace std;

void increment(int x) {
    x++;
}
int main(){
    int a = 20;
    increment(a);
    cout << a;
    return 0;
}
*/
/* call by address
#include <iostream>
using namespace std;

void increment(int *x) {
    (*x)++;
}

int main(){
    int a = 10;
    increment(&a);
    cout << a;
    return 0;
}*/

/*call by reference 
#include <iostream>
using namespace std;
void increment(int &x) {
    x++;
}
int main(){
    int a = 10;
    increment(a);
    cout << a;
    return 0;
}*/

/*Write a function to swap two numbers using all three function calling mechanisms. Which one is most efficient and why?*/
/* call by value
#include <iostream>
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main(){

    int x = 10 , y = 20;
    swap(x,y);
    cout << x << "" << y;
    
    return 0;
}*/

/*
#include<iostream>
using namespace std;
void swap( int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(x,y);
    cout << x << " " << y;
return 0;
}
*/

//best approach to swap values is the call by refrence as it directly shows the changes  its clean , efficient .


//Update student marks using value, address, and reference
/*
#include <iostream>
using namespace std;

class Student {
    public:

    int marks;
    Student(int m) : marks(m) {}
};

void updatebyvalue(Student s) {
    s.marks += 10;
}

void  updatebyaddress(Student *s) {
    s->marks += 10;
}

void updatebyrefrence(Student &s) {
    s.marks += 10;

}


int main(){

    Student s1(45), s2(33), s3(78);

    updatebyvalue(s1);
    updatebyaddress(&s2);
    updatebyrefrence(s3);

    cout << s1.marks << " " <<  s2.marks << " " << s3.marks;
    
    return 0;
}
*/
//Book class — pass object by value, reference, pointer
/*
#include <iostream>
using namespace std;

class Book {
public:
   string title;
   Book(string t) : title(t) {}
   void display() const {
    cout << "Title: " << title << endl;
   }
};

void showbyvalue(Book b) {b.display();}
void showbyref(Book &b) {b.display();}
void showbyptr(Book *b) {b->display();}

int main(){
    Book b("C++ Basics");
    showbyvalue(b);
    showbyref(b);
    showbyptr(&b);
    
    return 0;
}
*/
//Modify object data using reference
#include <iostream>
using namespace std;
class Product {
public:
     float price;
     Product(float p) : price(p) {} 
};

void applydiscount(Product &p) {
    p.price *= 0.9;
}
int main(){
    Product prod(1000);
    applydiscount(prod);
    cout << "Discounted Price: " << prod.price;
    
    return 0;
}