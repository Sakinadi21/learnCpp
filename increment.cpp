/*
increment operator
++x;  //increments x by one - BEFORE it is used
x++; //increments x by one - AFTER it is used

decrement operator
--x;  //decrements x by one - BEFORE it is used
x--; //decrements x by one - AFTER it is used
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
  int x = 3;
  int y = x++;
  int z = ++x;

  cout<<x<<endl;
  cout<<y<<endl;
  cout<<z;



getch();

}

