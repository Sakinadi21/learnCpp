#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
float num1,num2;
cout<<"Enter num1 : "<<endl;
cin>>num1;
cout<<"Enter num2 : "<<endl;
cin>>num2;


float sum =num1 + num2 ;
cout<<setw(15)<<"Sum is " <<sum;
cout<<endl;
cout<<showpoint;
cout<<fixed;
cout<<setprecision(10);

float sub =num1 - num2 ;
cout<<"Sub is " <<sub;
cout<<endl;


float mul =num1 * num2;
cout<<"Mul is "<<mul;
cout<<endl;

float div =num1 / num2 ;
cout<<"Div is " <<div;
cout<<endl;


getch();
}
