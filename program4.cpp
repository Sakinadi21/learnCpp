#include<iostream>
#include<conio.h>
using namespace std;

int main(){
char ch;
cout<<"Give a character : ";
cin>>ch;
cout<<"You entered : " << ch << endl;

int num1,num2,sum;
cout << "Enter 2 numbers : ";
cin>> num1>>num2;
sum=num1+num2;
cout <<"sum is " <<sum<<endl;
getch();

char name[20];
cout<<"Enter your name : "<<endl ;
cin>>name;
//gets(name);
cout<<"Welcome " <<name;
getch();
}
