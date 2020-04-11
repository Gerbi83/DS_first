#include <iostream>
using namespace std;
#include "listNode.h"

ListNode::ListNode()
{
	value = -1;
	next = nullptr;
}

ListNode::ListNode(int vl)
{
	value = vl;
	next = nullptr;
}

ListNode* ListNode::getNext() const
{
	return next;
}

void ListNode::setNext(ListNode * a)
{
	next = a;
}

int ListNode::getValue()
{
	return value;
}
