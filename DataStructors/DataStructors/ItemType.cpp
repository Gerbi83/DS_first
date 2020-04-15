#include "stack.h"

ItemType::ItemType(int color, int number) : color(color), computerNumber(number)
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

void ItemType::printComputer() const
{
    cout << "PC number:" << getComputerNumber() + 1 << ", has added to the accessible list " << endl;
}