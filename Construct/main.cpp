#include <iostream>
#include "myclass.h"
using namespace std;

int main()
{
    MyClass ob;
    MyClass *p = &ob;
    p -> display();
   // ob.display();
    return 0;
}
