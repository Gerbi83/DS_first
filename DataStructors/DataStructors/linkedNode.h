#ifndef LINKEDNODE_H
#define LINKEDNODE_H
#include <iostream>
using namespace std;

class linkedNode
{
public:
    int next = -1;
    linkedNode(int place);
    void setData(int pc);
    int getData() const;
    friend ostream& operator<<(ostream& os, const linkedNode &node);
private:
    int data = -9;
};

#endif //LINKEDNODE_H
