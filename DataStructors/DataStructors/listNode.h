#ifndef LISTNODE_H
#define LISTNODE_H


#include "List.h"
class List;

class ListNode
{
public:

	ListNode();
	ListNode(int value);
	ListNode* getNext();
	ListNode* getPrevious();
	void setNext(ListNode& a);
	int getValue();


private:
	int value;
	ListNode * next;
	ListNode * previous;
};







#endif //LISTNODE_H