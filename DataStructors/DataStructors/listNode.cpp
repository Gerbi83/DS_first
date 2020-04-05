#include <iostream>
using namespace std;
#include "listNode.h"





listNode::listNode()
{
	value = -1;
	next = previous = nullptr;
}

listNode::listNode(int vl)
{
	value = vl;
	next = previous = nullptr;
}

listNode* listNode::getNext()
{
	return next;
}

listNode* listNode::getPrevious()
{
	return previous;
}

void listNode::setNext(listNode& a)
{
	next = &a;
}

int listNode::getValue()
{
	return value;
}
