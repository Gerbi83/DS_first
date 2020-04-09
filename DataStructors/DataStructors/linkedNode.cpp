#include "linkedNode.h"

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

ostream& operator<<(ostream& os, const LinkedNode &node)
{
	os << "I'm computer number : " << node.pc;
	return os;
}