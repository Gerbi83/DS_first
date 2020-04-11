#ifndef __ITEMTYPE_H
#define __ITEMTYPE_H
#include <iostream>
using namespace std;

#define MAX 30

class ItemType
{
public:
    ItemType(int n, int number, int free);
    ItemType();
    int getComputerNumber() const;
    int isWhite() const;
    int getHeadFree() const;
    void printComputer() const;
private:
    int color; 
    int computerNumber;
    int headFree;
};

#endif // ITEMTYPE_H