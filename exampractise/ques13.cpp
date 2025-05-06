#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}
    void calculateArea() {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) : length(l), breadth(b) {}
    void calculateArea() {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}
    void calculateArea() {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape* s;
    Circle c(5);
    Rectangle r(4, 5);
    Triangle t(3, 6);

    s = &c; s->calculateArea();
    s = &r; s->calculateArea();
    s = &t; s->calculateArea();

    return 0;
}
