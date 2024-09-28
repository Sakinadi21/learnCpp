#include<iostream>
#include<conio.h>
using namespace std;

class MobileUser
{
public:
    void call()
    {
        cout << "Hello ! "<<endl;
    }

    // Virtual function to allow polymorphism
    virtual void sendMessage() = 0;

};

class Rahim : public MobileUser
{
public :
    void sendMessage()
    {
        cout << "Hi , This is Rahim "<<endl;
    }
};

class Karim : public MobileUser
{
public :
    void sendMessage()
    {
        cout << "Hi , This is Karim"<<endl;
    }
};

int main()
{
    MobileUser *m;

    Rahim r;
    Karim k;

    m = &r;
    m->call();
    m-> sendMessage();

     m = &k;
    m-> sendMessage();

    getch(); // If you're using an older compiler that supports conio.h
    return 0;
}

