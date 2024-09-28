#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    cout<<"Enter two integer numbers " <<endl;
    int num1 ;//= 100;
    int num2; //= 20;
    cin>>num1;

    cin>>num2;


     int *p1,*p2;

     p1 = &num1;
     p2 = &num2;

     int sum = *p1 + *p2;
     cout<<" sum of "<<num1 << " and "<< num2 << " is = " << sum;
     cout<<endl;

     int sub = *p1 - *p2;
     cout<<" sub of "<<num1 << " and "<< num2 << " is = " << sub;
     cout<<endl;

     int mul = *p1 * *p2;
     cout <<" mul of "<<num1 << " and "<< num2 << " is = " << mul;
     cout<<endl;

     int div = *p1 / *p2;
     cout <<" div of "<<num1 << " and "<< num2 << " is = " << div;
     cout<<endl;

     int rem = *p1 % *p2;
     cout <<" rem of "<<num1 << " and "<< num2 << " is = " << rem;
     cout<<endl;
 getch();

}
