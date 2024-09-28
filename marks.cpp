
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int num;
cout<<"Enter mark: ";
cin>>num;

if(num>100){
    cout<<"Invalid mark";
    }
if(num>=80 ){
    cout<<"A+";

}
else if(num>=70 ){
    cout<<"A";

}
else if(num>=60 ){
    cout<<"A-";

}
else if(num>=50 ){
    cout<<"B+";

}
else {
    cout<<"Fail";
    cout<<"Best wishes for next time ";

}

getch();
}
