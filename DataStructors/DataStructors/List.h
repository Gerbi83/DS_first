#ifndef LIST_H
#define LIST_H

#include "listNode.h"
class ListNode;

class List
{
public:
    List();
    ~List();
    //methods
     ListNode* getHead();
     ListNode* getTail();
    void addNodeToTail(int value);
private:
    ListNode* head;
    ListNode* tail;

};




#endif //LIST_H