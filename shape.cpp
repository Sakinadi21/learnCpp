#include<iostream>
#include<conio.h>
using namespace std;

class Shape
{
public:
    double dim1, dim2;

    // Updated constructor to allow a default value for dim2
    Shape(double dim1, double dim2 = 0)
    {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }

    // Virtual function to allow polymorphism
    virtual double area()
    {
        return 0; // Default implementation, can be overridden in derived classes
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(double dim1, double dim2)
        : Shape(dim1, dim2)
    {
    }

    double area()
    {
        return dim1 * dim2;
    }
};

class Triangle : public Shape
{
public:
    Triangle(double dim1, double dim2)
        : Shape(dim1, dim2)
    {
    }

    double area()
    {
        return 0.5 * dim1 * dim2;
    }
};

class Circle : public Shape
{
public:
    // Circle needs only one dimension (radius), so pass only dim1
    Circle(double dim1)
        : Shape(dim1)
    {
    }

    double area()
    {
        return 3.14 * dim1 * dim1; // Area = π * r²
    }
};

int main()
{
    Shape *p;
    Triangle t(10, 20);
    Rectangle r(10, 20);
    Circle c(10); // Create a Circle object with radius 10

    p = &t;
    cout << "Triangle Area = " << p->area() << endl;

    p = &r;
    cout << "Rectangle Area = " << p->area() << endl;

    p = &c;
    cout << "Circle Area = " << p->area() << endl;

    getch(); // If you're using an older compiler that supports conio.h
    return 0;
}
