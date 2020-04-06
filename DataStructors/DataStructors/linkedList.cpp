#include "linkedList.h"

linkedList::linkedList(int size)
{

	for (int i = 0; i < size; i++)
	{
		linkedNode* infoTemp = new linkedNode(i);
		this[i].info = infoTemp;
	}
}
