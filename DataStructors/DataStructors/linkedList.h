#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include "linkedNode.h"
class linkedNode;

class linkedList
{
public:
    linkedList(int size);
    void addItem(int pc);
    int getHeadFree() const;
    void printList() const;
    
private:
    linkedNode *info;
    int size; 
    int headFree;
};

#endif //LINKEDLIST_H
