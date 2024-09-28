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

    Student ()
    {
        cout << "Default constructor "<<endl;
    }
};


int main(){

    Student ob;
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

*/





