#include<iostream>
#include<conio.h>
using namespace std;

void square(int n){
    int result = n * n;
    cout << "Square of " << n << " is: " << result << endl;
}

int main(){
    for(int i = 1; i <= 100; i++){
        square(i);
    }

    getch();
}
