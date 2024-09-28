#include<iostream>
#include<conio.h>
using namespace std;

class Student {
public:
    string name;
    int id;
    double gpa;

    void display() {
        cout << "A very sensible student is " << name << " with ID " << id << " who has got GPA " << gpa << endl;
    }

    void displayre(){
    cout<<"A good student is " << name << "
    with ID " <<id << " who has got GPA" << gpa <<endl;
     }
};

int main() {
    Student Mashrafi, Sakiba;

    // Assigning values to Mashrafi
    Mashrafi.name = "Mashrafi";  // Assigning a name
    Mashrafi.gpa = 5.00;
    Mashrafi.id = 1;

    // Displaying Mashrafi's details
    Mashrafi.display();

    // Assigning values to Sakiba
    Sakiba.name = "Sakiba";  // Assigning a name
    Sakiba.gpa = 5.00;
    Sakiba.id = 2;

    // Displaying Sakiba's details
    Sakiba.displayre();

    getch();
}
