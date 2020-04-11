#ifndef __STACK_H
#define __STACK_H
#include "ItemType.h"

class Stack
{
public:
    Stack();
    bool isEmpty() const;
    void makeEmpty();
    ItemType pop();
    void push(ItemType data);
    ItemType arr[MAX];
private:
    int size;

};


#endif // STACK_H
