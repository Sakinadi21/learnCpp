#include "myclass.h"
#include<iostream>
using namespace std;
MyClass::MyClass()
{
   cout << "Constructor is called "<<endl;
}

MyClass::~MyClass()
{
    cout << "Constructor is called ";
}

void MyClass :: display()
{
    cout << "display is called "<<endl;
}
