#include "linkedNode.h"

linkedNode::linkedNode(int place)
{
	data = -1;
	next = place + 1;
}

void linkedNode::setData(int pc)
{
	data = pc;
}

int linkedNode::getData() const
{
	return data;
}

ostream& operator<<(ostream& os, const linkedNode &node)
{
	os << "I'm computer number : " << node.data;
	return os;
}