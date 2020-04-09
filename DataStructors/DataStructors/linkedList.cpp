#include "linkedList.h"

LinkedList::LinkedList(int size) : size(size)
{
	for (int i = 0; i < size; i++)
	{
		LinkedNode* tmp;
		if (i == size - 1)
		{
			tmp = new LinkedNode(-2);
		}
		else
		{
			tmp = new LinkedNode(i);
		}
		this[i].info = tmp;
	}
}

// need to modify 
void LinkedList::addItem(int pc)
{
	this->info->setData(pc);
	headFree = this->info->next;
	this->info->next = -9;
}

int LinkedList::getHeadFree() const
{
	return headFree;
}

void LinkedList::printList() const
{
	while(this->getHeadFree() != -1)
	{
		cout << this->getHeadFree() << endl;
	}
}