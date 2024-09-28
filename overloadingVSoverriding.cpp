//overload
class Overload
{
    void add(int a,int b)
    {
        cout << a + b;
    }
    void add(int a, int b , int c)
    {
        cout << a + b + c;
    }
    void add()
    {
        cout << "Nothing to add ";
    }
};
/*
Parameter must be different
It occurs within the same class
Inheritance is not involved
Return type may or may not be same
One method does not hide another.


*/

//override
class Person
{
public :
    void display()
    {
        cout << "I am a person " << endl;
    }
};

class Student : public Person
{
public :
    void display()
    {
        cout << "I am a student " << endl;
    }
};


class Tecaher : public Person
{
public :
    void display()
    {
        cout << "I am a teacher " << endl;
    }
};

/*
Parameter must be different
It occurs between two classes - sub class and a super class
Inheritance is  involved
Return type must be same
Child method  hide parent another.
*/
