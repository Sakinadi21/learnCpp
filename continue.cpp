#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    for(int i = 1; i <= 100; i += 3) // Changed comma to semicolon
    {
        if(i == 10)
        {
            continue;
        }
if(i>13)
{

    break;
}
        cout << i << endl;
    }
    getch();
    return 0;
}

