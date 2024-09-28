#include<iostream>
using namespace std;

class Student
{
public:
    const int admissionFee;

    // Correctly initializing the const member variable using initializer list
    Student(int x) : admissionFee(x)
    {
        cout << admissionFee << endl;
    }
};

int main()
{
    Student s1(15000);

    cin.get();  // Wait for a key press (optional)
    return 0;
}
