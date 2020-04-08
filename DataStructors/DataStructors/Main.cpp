using namespace std;
#include <iostream>
#include "listNode.h"
#include "List.h"
#include "linkedList.h"
#include "linkedNode.h"

int main()
{
	const int BLACK = 0;
	const int WHITE = 1;
	int numberOfPc;
	int numberOfConnection;
	int a,b;
	
	cout << "hello, please enter number of computers: \n";
	cin >> numberOfPc;
	//create network
	List* network = new List[numberOfPc+1];
	cout << "Please enter the number of connections: \n";
	cin >> numberOfConnection;
	//create color array
	int* color = new int[numberOfPc];
	for (int i = 0; i < numberOfConnection; i++)
	{
		color[i] = BLACK;
	}
	linkedList* Accessiable = new linkedList(numberOfPc);
	//insert network 
	for (int i = 0; i < numberOfPc; i++)
	{
		cout << "please enter network, source and connection: \n";
		cin >> a;
		cin >> b;

		if(a <= numberOfPc and b <= numberOfPc)
		{
			network[a-1].addNodeToTail(b);
		}
		else
		{
			cout << "Invalid computer number" << endl;
		}
		
	}
}
