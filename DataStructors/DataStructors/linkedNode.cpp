#include "linkedNode.h"

linkedNode::linkedNode(int place)
{
	pc = -1;
	next = place + 1;
}

void linkedNode::setData(int computer)
{
	pc = computer;
}

int linkedNode::getData() const
{
	return pc;
}

ostream& operator<<(ostream& os, const linkedNode &node)
{
	os << "I'm computer number : " << node.pc;
	return os;
}