#ifndef LISTNODE_H
#define LISTNODE_H


#include "List.h"
class List;

class listNode
{
public:

	listNode();
	listNode(int value);
	listNode* getNext();
	listNode* getPrevious();
	void setNext(listNode& a);
	int getValue();


private:
	int value;
	listNode * next;
	listNode * previous;
};







#endif //LISTNODE_H