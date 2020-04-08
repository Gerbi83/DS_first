using namespace std;
#include <iostream>
#include "listNode.h"
#include "List.h"
#include "linkedList.h"
#include "linkedNode.h"

const int BLACK = 0;
const int WHITE = 1;

void FindAccessible(int pcX, linkedList* linked, int* colorArr, List* netW);

int main()
{

	int numberOfPc;
	int numberOfConnection;
	int a,b;
	
	cout << "hello, please enter number of computers: \n";
	cin >> numberOfPc;

	//create network
	List* network = new List[numberOfPc];

	cout << "Please enter the number of connections: \n";
	cin >> numberOfConnection;

	//create color array
	int* color = new int[numberOfPc];

	for (int i = 0; i < numberOfConnection; i++) { color[i] = WHITE; }

	//create accessiable linkedlist
	linkedList* Accessiable = new linkedList(numberOfPc);

	//insert network 
	for (int i = 0; i < numberOfPc; i++)
	{
		cout << "please enter network, source and connection: \n";
		cin >> a;
		cin >> b;

		if(a <= numberOfPc and b <= numberOfPc)
		{
			network[a-1].addNodeToTail(b-1);
		}
		else
		{
			cout << "Invalid computer number" << endl;
		}
		
	}

	FindAccessible(1, Accessiable, color, network);
}

void FindAccessible(int pcX, linkedList* linked, int* colorArr, List * netW)
{
	if (colorArr[pcX] == BLACK)
	{
		return;
	}

	colorArr[pcX] = BLACK;
	
	// add linked[pcX] to accessable
	
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
