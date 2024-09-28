#include<iostream>
#include<conio.h>
using namespace std;

class Student
{ public :
    int id;
    double cgpa;

    void display()
    {
        cout<<id << " "<<cgpa <<endl;
    }



    Student(int x,double y)
    {
        id = x;
       cgpa = y;
    }
};
int main(){
    Student Alim(101,3.44);
    Alim.display();

cout<<endl;
     Student Mashrafi(102,4.00);
      Mashrafi.display();


cout<<endl;
      Student Sakiba(103,3.12);
      Sakiba.display();

   getch();
}


/*
Constructor is a special type of function that is used to initialize the object

Properties :
Constructor is a special type of function
Constructor has the same name as that of the class it belongs.
It has no return type not even void.
It is called automitacally
*/




