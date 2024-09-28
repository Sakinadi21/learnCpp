#include<iostream>
#include<conio.h>
using namespace std;

void addition(int ,int );
void subtraction(int ,int );
void multiplication(int ,int );
void divison(int ,int );

int main(){

addition(13,53);
subtraction(53,13);
multiplication(3,13);
divison(531,3);

cout<<"All functions are called"<<endl;

getch();
}

void addition(int a,int b){
int sum = a + b;
cout<<"sum is : " << sum <<endl;
}
void subtraction(int a,int b){
int sub = a - b;
cout<<"sub is : " << sub <<endl;
}
void multiplication(int a,int b){
int mul = a * b;
cout<<"mul is : " << mul <<endl;
}
void divison (int a,int b){
int div = a/ b;
cout<<"div is : " << div <<endl;
}
