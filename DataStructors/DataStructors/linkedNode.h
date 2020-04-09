#ifndef LINKEDNODE_H
#define LINKEDNODE_H
#include <iostream>
using namespace std;

class LinkedNode
{
public:
    int next = -1;
    LinkedNode(int place);
    void setData(int pc);
    int getData() const;
    friend ostream& operator<<(ostream& os, const LinkedNode &node);
private:
    int pc = -9;
};

#endif //LINKEDNODE_H
