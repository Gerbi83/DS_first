#include <iostream>
using namespace std;
#include "listNode.h"





listNode::listNode()
{
	value = -1;
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

int listNode::getValue()
{
	return value;
}

List * listNode::getList()
{
	return innerList;
}
