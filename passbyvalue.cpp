#include<iostream>

#include<conio.h>
using namespace std;
void display(int num){
 num= 20;
 }

int main(){
   int x = 10;
   cout<<"Before calling the function x = " << x << endl ;

   display(x);
   cout<<"After calling the function x = "<<x <<endl;
   getch();
}


/*
In case of pass by value. a copy of the argument is passed to the function
*/
