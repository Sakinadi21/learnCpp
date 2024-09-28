#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x = 5;
    int *p;

    p=&x;
    cout<<"x = "<< x << endl;
    cout<<"&x = "<< &x << endl;
    cout<<"p = "<< p << endl;
        cout<<"*p = "<< *p << endl;
getch();
}
