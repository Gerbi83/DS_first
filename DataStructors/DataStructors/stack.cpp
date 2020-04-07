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
    return arr[size--];
}

void Stack::push(int data)
{
    ItemType new_node;
    new_node.data = data;
    arr[size] = new_node;
    size++;
}

void Stack::print_stack()
{
    cout << "Stack have" << size << "elements" << endl;
    for (int i=0; i < size; i++)
    {
	    cout << "Item Number: " << i << endl;
	    cout << this->arr[i].data << endl;
}
}
