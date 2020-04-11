#include "linkedNode.h"

LinkedNode::LinkedNode()
{
	pc = -1;
}

LinkedNode::LinkedNode(int place)
{
	pc = -1;
	next = place + 1;
}

void LinkedNode::setData(int computer)
{
	pc = computer;
}

int LinkedNode::getData() const
{
	return pc;
}

int LinkedNode::getNext() const
{
	return next;
}

void LinkedNode::setNext(int newNext)
{
	next = newNext;
}

void LinkedNode::printNode() const
{
	if(pc > -1)
		cout << "I'm computer number : " << pc << " in the accessible list" << endl;
	else
		return;
}