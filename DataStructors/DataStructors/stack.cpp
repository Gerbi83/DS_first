#include "stack.h"

Stack::Stack()
{
    size = 0;
}

bool Stack::isEmpty() const
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
