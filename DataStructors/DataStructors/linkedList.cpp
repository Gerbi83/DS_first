#include "linkedList.h"

linkedList::linkedList(int size)
{

	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			linkedNode* infoTemp = new linkedNode(-2);
			this[i].info = infoTemp;
		}
		else
		{
			linkedNode* infoTemp = new linkedNode(i);
			this[i].info = infoTemp;
		}

	}
}

void linkedList::addItem(int pc)
{
	this->info->setData(pc);
}
