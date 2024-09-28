#include<iostream>
#include<conio.h>
using namespace std;

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);

int main(){
    int result;

    result = addition(13, 53);
    cout << "Sum is: " << result;
    cout << endl;

    result = subtraction(53, 13); // corrected function name
    cout << "Subtraction is: " << result;
    cout << endl;

    result = multiplication(13, 3);
    cout << "Multiplication is: " << result;
    cout << endl;

    result = division(13, 53);
    cout << "Division is: " << result;
    cout << endl;

    getch();
}

int addition(int a, int b){
    int sum = a + b;
    return sum;
}

int subtraction(int a, int b){  // corrected function name
    int sub = a - b;
    return sub;
}

int multiplication(int a, int b){
    int mul = a * b;
    return mul;
}

int division(int a, int b){  // corrected spelling of "division"
    if (b != 0)
        return a / b;  // integer division
    else {
        cout << "Error: Division by zero." << endl;
        return 0;
    }
}
