#include "stack.h"

Stack::Stack()
{
    size = 0;
}

bool Stack::isEmpty()
{
    return size > 0;
}

void Stack::makeEmpty()
{
    for(int i=0; i<size; i++)
    {
	this->pop();
    }
}

ItemType Stack::pop()
{	
    return arr[--size];
}

void Stack::push(ItemType data)
{
    arr[size] = data;
    size++;
}

void Stack::print_stack()
{
    cout << "Stack have" << size << "elements" << endl;
    for (int i=0; i < size; i++)
    {
	    cout << "Item Number: " << i << endl;
	    cout << this->arr[i].computerNumber << endl;
}
}
