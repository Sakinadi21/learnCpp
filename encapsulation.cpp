#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    private :
        string name;
    public:
        void setName(string s)
        {
            name = s;
        }
        string getName()
        {
            return name;
        }
};
int main()
{
    Student s1;
    s1.setName("Mashu");
    cout << s1.getName();


    getch();
}
