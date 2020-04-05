#ifndef LISTNODE_H
#define LISTNODE_H


#include "List.h"
class  List;

class listNode
{
public:

	listNode();
	listNode* getNext();
	listNode* getPrevious();
	int getValue();
	List * getList();

private:
	int value;
	List * innerList;
	listNode* next;
	listNode* previous;
};







#endif //LISTNODE_H