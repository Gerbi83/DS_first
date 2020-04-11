#ifndef LINKEDNODE_H
#define LINKEDNODE_H
#include <iostream>
using namespace std;
/*Need To Free*/
class LinkedNode
{
public:
    LinkedNode();
    LinkedNode(int place);
    void setData(int pc);
    int getNext() const;
    int getData() const;
    void setNext(int newNext);
    friend ostream& operator<<(ostream& os, const LinkedNode &node);
private:
    int pc = -9;
    int next = -1;
};

#endif //LINKEDNODE_H
