#include<iostream>
#include<conio.h>
#include<string.h>
#include<algorithm> // For transform() function
using namespace std;

int main()
{
    char name1[] = "Sakiba";
    char name2[10];
    char name3[] = "Belal";
    char name[] = "Nadiha";

    // Convert to lowercase
    transform(name, name + strlen(name), name, ::tolower);
    cout << name << endl;

    // Convert to uppercase
    transform(name, name + strlen(name), name, ::toupper);
    cout << name << endl;

    // Calculate the length of name1
    int len = strlen(name1);
    cout << "Length of string = " << len << endl;

    // Copy name1 to name2
    strcpy(name2, name1);
    cout << "Name2 = " << name2 << endl;

    // Concatenate name1 and name3
    strcat(name1, name3);
    cout << name1 << endl;

    // Compare name1 and name3
    int value = strcmp(name1, name3);
    if (value == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    getch(); // If you're using an older compiler that supports conio.h
    return 0;
}
