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
	
	cout << "hello, please enter number of computers: \n";
	cin >> numberOfPc;

	//create network
	List* network = new List[numberOfPc];

	cout << "Please enter the number of connections: \n";
	cin >> numberOfConnection;

	//create color array
	int* color = new int[numberOfPc];

	for (int i = 0; i < numberOfPc; i++) { color[i] = WHITE; }

	//create accessible LinkedList
	LinkedList accessible(numberOfPc);

	//insert network 
	for (int i = 0; i < numberOfConnection; i++)
	{
		cout << "please enter network, source and connection: \n";
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
	//cout << "please choose pc to check: \n" 
	//cin >> pcX;
	pcX = 1;
	pcX--;
	FindAccessibleRec(pcX, &accessible, color, network);
	accessible.printList();
}

void FindAccessible(int pcX, LinkedList * linked, int* colorArr, List * netW)
{	
	int new_pc;
	Stack s;
	ItemType curr(colorArr[pcX] , pcX, linked->getHeadFree());
	s.push(curr);
	ListNode* iterator = netW[pcX].getHead();
	while(s.isEmpty())
	{
		curr = s.pop();
		if(curr.color == WHITE)
		{
			linked->addItem(curr.computerNumber);
			colorArr[curr.computerNumber] = BLACK;
			cout << "PC number: " << curr.computerNumber+1 << " ,has added to the accssible list " << endl;
		}
		while(iterator->getNext())
		{
			iterator = iterator->getNext();
			new_pc = iterator->getValue(); 
			s.push(ItemType(colorArr[new_pc], new_pc ,linked->getHeadFree()));
		}
	}
}

void FindAccessibleRec(int pcX, LinkedList * linked, int* colorArr, List* netW)
{
	if (colorArr[pcX] == BLACK)
	{
		return;
	}
	colorArr[pcX] = BLACK;
	linked->addItem(pcX);

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
	return;
}
