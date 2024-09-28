#include<iostream>

using namespace std;

int main(){
    int year;

    cout << "Enter any year : ";
    cin >> year;

    if (year%4==0 && year%100!=0) {
        cout << year << " is Leap year" ;
    } else if (year%400==0 ) {
       cout << year << " is Leap year" ;
    } else {
        cout <<year << " is not leap year ";
    }

    return 0; // Moved inside the main function
}

