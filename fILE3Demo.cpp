#include<iostream>
#include<fstream>  // Added for file handling
#include<string>
using namespace std;

int main()
{
    string line;

    ifstream file("details.txt");  // Correctly opening the file

    if (file.is_open())  // Check if the file was successfully opened
    {
        while (getline(file, line))  // Corrected function call
        {
            cout << line << endl;
        }
        file.close();  // Closing the file
    }
    else
    {
        cout << "Unable to open file" << endl;
    }

    return 0;
}

///beginnersbook.com
//sololearn.com
//tutorialspoint.com
