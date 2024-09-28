#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1 = 100;
    int num2 = 20;

    int *p1,*p2;

    p1 = &num1;
    p2 = &num2;

    int sum = *p1 + *p2;
    cout << sum;
    cout<<endl;

     int sub = *p1 - *p2;
    cout << sub;
     cout<<endl;
     int mul = *p1 * *p2;
    cout << mul;
     cout<<endl;
     int div = *p1 / *p2;
    cout << div;
     cout<<endl;

     int rem = *p1 % *p2;
     cout << rem;
     cout<<endl;
    getch();

}
