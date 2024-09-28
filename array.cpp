#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int marks[5];
    marks[0]=55;
    marks[1]=45;
    marks[2]=35;
    marks[3]=25;
    marks[4]=85;

    cout << marks[0] << "  ";
    cout << marks[1] << "  ";
    cout << marks[2] << "  ";
    cout << marks[3] << "  ";
    cout << marks[4] << "  ";
    cout<<endl;
     for(int i=0;i<5;i++)
    {
        cout<<"Marks for student " << i+1 << " = ";
        cin>>marks[i];
    }

    cout<<"marks are : ";
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<< "  ";
    }


    getch();

}

