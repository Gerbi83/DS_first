#include <iostream>
using namespace std;
#include "List.h"



List::List()
{
	listNode a;
	head =tail = &a;
}



listNode* List::getHead()
{
	return head;
}

listNode* List::getTail()
{
	return tail;
}
