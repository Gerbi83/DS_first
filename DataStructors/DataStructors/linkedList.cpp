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
	headFree = 0;
}
// need to modify 
void linkedList::addItem(int pc)
{
	this->info->setData(pc);
	headFree = this->info->next;
	this->info->next = -9;

}

int linkedList::getHeadFree() const
{
	return headFree;
}

void linkedList::printList() const
{
	for(int i=0; i < size; i ++)
	{
		cout << this->getHeadFree() << endl;
	}
}