#include<iostream>
using namespace std;

int main() {

    int num1, num2;
    cout<<"Enter num1 : "<<endl;
cin>>num1;

cout<<"Enter num2 : "<<endl;
cin>>num2;
   /* num1 = 40;
    num2 = 30;  */

    int sum = num1 + num2;
    cout << "Sum is : " << sum << endl;

    int sub = num1 - num2;
    cout << "Subtraction is : " << sub << endl;

    int mul = num1 * num2;
    cout << "Multiplication is : " << mul << endl;

    // Division should be cast to double for a more accurate result.
    double div = static_cast<double>(num1) / num2;
    cout << "Division is : " << div << endl;

    return 0;  // Removed getch(), not necessary in modern C++.
}
