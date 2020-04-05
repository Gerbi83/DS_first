#ifndef LIST_H
#define LIST_H

#include "listNode.h"
class listNode;

class List
{
public:
    List();
    //methods
     listNode* getHead();
     listNode* getTail();
    void addNodeToTail(int value);
private:
    listNode* head;
    listNode* tail;

};




#endif //LIST_H