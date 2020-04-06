#include <iostream>
using namespace std;
#include "listNode.h"





ListNode::ListNode()
{
	value = -1;
	next = previous = nullptr;
}

ListNode::ListNode(int vl)
{
	value = vl;
	next = previous = nullptr;
}

ListNode* ListNode::getNext()
{
	return next;
}

ListNode* ListNode::getPrevious()
{
	return previous;
}

void ListNode::setNext(ListNode& a)
{
	next = &a;
}

int ListNode::getValue()
{
	return value;
}
