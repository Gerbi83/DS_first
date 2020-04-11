#ifndef LINKEDNODE_H
#define LINKEDNODE_H
#include <iostream>
using namespace std;

class LinkedNode
{
public:
    LinkedNode();
    LinkedNode(int place);
    void setData(int pc);
    int getNext() const;
    int getData() const;
    void setNext(int newNext);
    void printNode() const;
private:
    int pc = -9;
    int next = -1;
};

#endif //LINKEDNODE_H
