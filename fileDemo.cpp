/*
File is used to store data permanently
cin and cout method requires <iostream> library.
To read and write into a file we need <fstream> library.

ofstream data type used to create and write information to files
ifstream data type used to read information from files.
*/
#include<stdio.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("student.txt");
    file << "I am Sakiba Belal.I am 19 years old.I am from Chattogram .\n";
    file.close();
}
