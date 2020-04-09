#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include "linkedNode.h"
class LinkedNode;

class LinkedList
{
public:
    LinkedList(int size);
    void addItem(int pc);
    int getHeadFree() const;
    void printList() const;
    
private:
    LinkedNode *info;
    int size; 
    int headFree;
};

#endif //LINKEDLIST_H
