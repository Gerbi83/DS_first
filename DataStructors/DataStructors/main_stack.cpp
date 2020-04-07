#include <iostream>
using namespace std;
#include "stack.h"

int stack_test()
{
    Stack b;
    b.push(20);
    b.push(30);
    b.print_stack();
    b.pop();
    b.print_stack();
    b.makeEmpty();
    cout << b.isEmpty() << endl;
    b.push(45);
    cout << b.isEmpty() << endl;


}
