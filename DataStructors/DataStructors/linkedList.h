#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include "linkedNode.h"
class linkedNode;

class linkedList
{
public:
    linkedList(int size);
    void addItem(int pc);

private:
    linkedNode * info;
};

#endif //LINKEDLIST_H
