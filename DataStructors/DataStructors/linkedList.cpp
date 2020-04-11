#include "linkedList.h"

LinkedList::LinkedList(int size) : size(size)
{
	info = new LinkedNode[size];
	for (int i = 0; i < size-1; i++)
	{
		info[i].setData(-9);
		info[i].setNext(i + 1);
	}
	info[size] = -1;		
	headFree = 0;
}

void LinkedList::addItem(int pc)
{
	info[headFree].setData(pc);
	int temp = info[headFree].getNext();
	info[headFree].setNext(-9);
	headFree = temp;
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
