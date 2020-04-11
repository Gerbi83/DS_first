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

ostream& operator<<(ostream& os, const LinkedNode &node)
{
	os << "I'm computer number : " << node.pc;
	return os;
}