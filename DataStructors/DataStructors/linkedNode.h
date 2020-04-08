#ifndef LINKEDNODE_H
#define LINKEDNODE_H



class linkedNode
{
public:
    linkedNode(int place);
    void setData(int pc);
private:
    int data = -9;
    int next = -1;
};

#endif //LINKEDNODE_H
