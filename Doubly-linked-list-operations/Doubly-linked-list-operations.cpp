// Doubly-linked-list-operations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include "doubly.h"

int main()
{
	doubly Edwin;
	Edwin.addNode(5);
	Edwin.addNode(3);
	Edwin.addNode(12);
	Edwin.addNode(9);

	Edwin.displayReversedList();
	Edwin.displayList();
	Edwin.deleteNode(12);
	Edwin.displayList();

	Edwin.deleteNode(3);
	Edwin.displayList();
}


