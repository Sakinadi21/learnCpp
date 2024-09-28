#include<iostream>
#include<conio.h>
using namespace std;

class Student
{ public :
    int id;
    double gpa;

    void display()
    {
        cout<<id << " "<<gpa <<endl;
    }
};
int main(){
      Student Alim,Mashrafi,Sakiba;
      Alim.id = 101;
      Alim.gpa=3.44;
      Alim.display();
      //cout<<Alim.id<< "  "<<Alim.gpa;
cout<<endl;
     // Student Mashrafi;
      Mashrafi.id = 01;
      Mashrafi.gpa=5.00;
      Mashrafi.display();
     // cout<<Mashrafi.id<< "  "<<Mashrafi.gpa;

cout<<endl;
     // Student Sakiba;
      Sakiba.id = 02;
      Sakiba.gpa=5.00;
     // cout<<Sakiba.id<< "  "<<Sakiba.gpa;

   getch();
}


/*
In case of pass by reference , copies an argument's address into the formal parameter
*/


