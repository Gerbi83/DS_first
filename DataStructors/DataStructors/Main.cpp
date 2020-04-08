using namespace std;
#include <iostream>
#include "listNode.h"
#include "List.h"
#include "linkedList.h"
#include "linkedNode.h"

int main()
{
	int numberOfPc;
	int a,b;
	
	cout << "hello, please enter number of computers: \n";
	cin >> numberOfPc;
	//create network
	List* network = new List[numberOfPc+1];
	linkedList* Accessiable = new linkedList(numberOfPc);
	//insert network
	for (int i = 0; i < numberOfPc; i++)
	{
		cout << "please enter network, source and connection: \n";
		cin >> a;
		cin >> b;
		network[a-1].addNodeToTail(b);
	}
}
