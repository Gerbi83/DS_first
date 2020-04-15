#ifndef LISTNODE_H
#define LISTNODE_H

#include "List.h"
class List;

class ListNode
{
public:
	ListNode();
	ListNode(int value);
	ListNode* getNext() const;
	void setNext(ListNode *a);
	int getValue();

private:
	int value;
	ListNode *next;
};







#endif //LISTNODE_H