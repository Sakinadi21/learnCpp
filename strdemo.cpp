#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string str1 = "Sakiba";
    string str2 = "Belal";
    string str3;

    str3=str1;
    cout << "str3 : " <<str3 <<endl;

    str3 = str1 + str2;
    cout << "str1 + str2 = " <<str3 <<endl;

    int len = str1.size();
    cout<<"Length of str1 = " <<len;


    getch();
}
