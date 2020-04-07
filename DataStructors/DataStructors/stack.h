#ifndef __STACK_H
#define __STACK_H
#include <iostream>
using namespace std;
#define MAX 1000

class ItemType
{
public:
    int data;
};

class Stack
{
public:
    ItemType arr[MAX];
    int size; 
    Stack();
    bool isEmpty();
    void makeEmpty();
    ItemType pop();
    void push(int data);
    void print_stack();
};


#endif // STACK_H