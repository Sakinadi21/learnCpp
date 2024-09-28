#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char message[] = {'h','e','l','l','o','\0'};
    cout<<message<<endl;
    char msg[] = "Mashuuuu";
    cout<<msg <<endl;

    char name[30];
    cout<<"Enter your name : ";
    cin>>name;

    cout<<"Welcome " <<name <<endl;
    return 0;
}
