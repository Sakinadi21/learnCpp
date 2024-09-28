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

    void setValue(int x, double y){
    id = x;
    cgpa = y;}
};
int main(){
      Student Alim,Mashrafi,Sakiba;

    Alim.setValue(101,3.44);
    Alim.display();
      //cout<<Alim.id<< "  "<<Alim.gpa;
cout<<endl;
     // Student Mashrafi;
      Mashrafi.setValue(102,4.00);
      Mashrafi.display();
     // cout<<Mashrafi.id<< "  "<<Mashrafi.gpa;

cout<<endl;
     // Student Sakiba;
      Sakiba.setValue(103,3.12);
      Sakiba.display();
     // cout<<Sakiba.id<< "  "<<Sakiba.gpa;

   getch();
}






