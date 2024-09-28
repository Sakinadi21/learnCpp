#include<iostream>

#include<conio.h>
using namespace std;
int x = 10;//global variable
/*void display()
{
   cout<<"Inside the display function x = " <<x <<endl;
 }*/

int main(){
       int x = 50; //local variable
   cout<<"Inside the main function x = " << x << endl ;
cout << :: x <<endl; //to print global variable
//   display();

   getch();
}


/*
In case of pass by reference , copies an argument's address into the formal parameter
*/

