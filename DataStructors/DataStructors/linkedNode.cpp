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
