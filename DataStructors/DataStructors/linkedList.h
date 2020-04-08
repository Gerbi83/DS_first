#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include "linkedNode.h"
class linkedNode;

class linkedList
{
public:
    linkedList(int size);
    void addItem(int location, int pc);
    int getHeadFree() const;
    linkedNode* getNext() const;
    void printList() const;
private:
    linkedNode *info;
    int size; 
};

#endif //LINKEDLIST_H
