#include <iostream>
using namespace std;
#include "List.h"



List::List()
{
	listNode * a = new listNode();
	head =tail = a;
}




 listNode * List::getHead()
{
	return head;
}

 listNode* List::getTail()
{
	return tail;
}

void List::addNodeToTail(int value)
{
	listNode a = listNode(value);
	tail->setNext(a);
	tail = &a;
}
