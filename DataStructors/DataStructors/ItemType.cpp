#include "stack.h"

ItemType::ItemType(int color, int number, int free) : color(color), computerNumber(number), headFree(free) 
{

}
ItemType::ItemType() {}


int ItemType::getComputerNumber() const
{
    return computerNumber;
}

int ItemType::isWhite() const
{
    return color == 1;
}

int ItemType::getHeadFree() const
{
    return headFree;
}

void ItemType::printComputer() const
{
    cout << "PC number:" << getComputerNumber() + 1 << ", has added to the accessible list " << endl;
}