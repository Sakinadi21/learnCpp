#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public :
    string name;
    int age ;

    void display1()
    {

        cout << "Name : "<<name <<endl;
        cout << "Age : " <<age <<endl;
    }
};

class Student : public Person
{
public :
    int id ;

    void display2()
    {
        cout << "ID : " <<id <<endl;
        cout << "Name : "<<name <<endl;
        cout << "Age : " <<age <<endl;
    }
};
int main()
{
    Student s1;
    s1.id = 101;
    s1.name = "Mashu";
    s1.age = 27;
    s1.display2();

    getch();
}
