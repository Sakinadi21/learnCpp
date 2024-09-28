#include<iostream>
#include<stdlib.h>Jn
#include<conio.h>
using namespace std;

void sum(int x,int y)
{
    int add = x + y;
    cout<<"sum is : "<<add<<endl;
}
void sum(int x,int y,int z)
{
    int add = x + y + z;
    cout<<"sum is : "<<add<<endl;
}


int main(){
   sum(10,20);
   sum(10,20,30);



getch();


}
