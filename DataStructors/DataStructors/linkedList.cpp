#include "linkedList.h"

linkedList::linkedList(int size) : size(size)
{

	for (int i = 0; i < size; i++)
	{
		linkedNode* tmp;
		if (i == size - 1)
		{
			tmp = new linkedNode(-2);
		}
		else
		{
			tmp = new linkedNode(i);
		}
		this[i].info = tmp;
	}
}
// need to modify 
void linkedList::addItem(int location, int pc)
{
	this->info->setData(pc);
}

int linkedList::getHeadFree() const
{
	return info->next;
}

void linkedList::printList() const
{
	for(int i=0; i < size; i ++)
	{
		cout << this->getHeadFree() << endl;
	}
}