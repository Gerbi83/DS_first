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
    ItemType to_del;
    while(!isEmpty())
    {
	    pop();
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
