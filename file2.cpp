#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    ofstream file;
    file.open("saku.txt");

    cout << "Enter your name: ";
    getline(cin, name);

    file << "Welcome " << name << endl;
    file.close();

    return 0;
}
