using namespace std;
#include <iostream>
#include "listNode.h"
#include "List.h"
#include "linkedList.h"
#include "linkedNode.h"
#include "stack.h"

const int BLACK = 0;
const int WHITE = 1;

void FindAccessible(int pcX, LinkedList* linked, int* colorArr, List* netW);
void FindAccessibleRec(int pcX, LinkedList* linked, int* colorArr, List* netW);

int main()
{
	int numberOfPc;
	int numberOfConnection;
	int a,b, pcX;
	
	cout << "hello, please enter number of computers: " << endl;
	cin >> numberOfPc;

	//create network
	List* network = new List[numberOfPc];

	cout << "Please enter the number of connections: " << endl;
	cin >> numberOfConnection;

	//create color array
	int* color = new int[numberOfPc];

	for (int i = 0; i < numberOfPc; i++) { color[i] = WHITE; }

	//create accessible LinkedList
	LinkedList accessible(numberOfPc);

	//insert network 
	for (int i = 0; i < numberOfConnection; i++)
	{
		cout << "please enter network, source and connection: " << endl;
		cin >> a >> b;

		if(a <= numberOfPc && b <= numberOfPc)
		{
			network[a-1].addNodeToTail(b-1);
		}
		else
		{
			cout << "Invalid computer number\n try again" << endl;
			i--;
		}
	}
	cout << "please choose pc to check: " << endl;
	cin >> pcX;
	pcX--;
	FindAccessible(pcX, &accessible, color, network);
	accessible.printList();
	FindAccessibleRec(pcX, &accessible, color, network);
	accessible.printList();
}

void FindAccessible(int pcX, LinkedList * linked, int* colorArr, List * netW)
{	
	int new_pc;
	Stack s;
	ItemType curr(colorArr[pcX] , pcX, linked->getHeadFree());
	s.push(curr);
	ListNode* iterator;
	while(s.isEmpty())
	{
		curr = s.pop();
		iterator = netW[s.arr->getComputerNumber()].getHead();
		//inserting all of pcX nextwork
		while (iterator->getNext())
		{
			iterator = iterator->getNext();
			new_pc = iterator->getValue();
			s.push(ItemType(colorArr[new_pc], new_pc, linked->getHeadFree()));
		}
		//inserting pcX
		if(curr.isWhite())
		{
			linked->addItem(curr.getComputerNumber()+1);
			colorArr[curr.getComputerNumber()] = BLACK;
			curr.printComputer();
		}
	}
}

void FindAccessibleRec(int pcX, LinkedList *linked, int* colorArr, List* netW)
{
	if (colorArr[pcX] == BLACK)
	{
		return;
	}
	colorArr[pcX] = BLACK;
	linked->addItem(pcX+1);

	ListNode* head;
	head = netW[pcX].getHead();
	while (head != NULL)
	{
		if (colorArr[head->getValue()] == WHITE)
		{
			FindAccessible(head->getValue(), linked, colorArr, netW);
		}
		head = head->getNext();
	}
}
