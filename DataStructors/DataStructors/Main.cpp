using namespace std;
#include <iostream>
#include "listNode.h"
#include "List.h"

void main()
{
	int numberOfPc;
	int a,b;
	cout << "hello, please enter number of computers: \n";
	cin >> numberOfPc;
	//create network
	List* network = new List[numberOfPc+1];

	//insert network
	for (int i = 0; i < numberOfPc; i++)
	{
		cout << "please enter network, source and connection: \n";
		cin >> a;
		cin >> b;
		network[a-1].addNodeToTail(b);
	}
	

}