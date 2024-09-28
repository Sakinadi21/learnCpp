#include<iostream>
#include<fstream>  // Added for file handling
#include<string>
using namespace std;

int main()
{
    string name;
    int age;

    ofstream file;
    file.open("student_details.txt", ios::out | ios::app);  // Correctly opening the file

    for(int i = 1; i <= 3; i++)  // Correct initialization
    {
        cout << "Enter your name: ";
        cin.ignore();  // Ignore newline from previous input
        getline(cin, name);
        file << name << "\t";

        cout << "Enter your age: ";
        cin >> age;
        file << age << endl;
    }

    file.close();  // Closing the file
    return 0;
}
