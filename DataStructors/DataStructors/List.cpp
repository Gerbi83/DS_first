#include <iostream>
using namespace std;
#include "List.h"



List::List()
{
	ListNode * a = new ListNode();
	head =tail = a;
}




 ListNode * List::getHead()
{
	return head;
}

 ListNode* List::getTail()
{
	return tail;
}

void List::addNodeToTail(int value)
{
	ListNode a = ListNode(value);
	tail->setNext(a);
	tail = &a;
}
