#include <iostream>
#include <cstdlib>
#include "doubly.h"

doubly::doubly(){
	head = NULL;
	current = NULL;
	tail = NULL;
}

void doubly::addNode(int data) {
	//create temporary node
	ptr temp = new node;
	temp->next = NULL;
	temp->data = data;
	//check if list is null
	if (head == NULL)
	{

		head = temp;
		head->prev = NULL;
		tail = head;
	}
	else
	{
		current = tail;
		current->next = temp;
		temp->prev = current;
		tail = temp;

		current = NULL;

	}
}
void doubly::deleteNode(int data) {
	current = head;
	//check if list is empty
	if (current == NULL) {
		std::cout << "The list is empty hence delete operation cannpt be carried out\n";
	}
	else
	{
		//traverse list to find specific node with that data
		while (current->data != data)
		{
			current = current->next;
		}

		if (current->prev == NULL)
		{
			head = head->next;
			head->prev = NULL;
			
		}
		else
		{
			
			current->prev->next = current->next;
			current->next->prev = current->prev;

		}

	}
	delete current;
}
void doubly::displayList() {
	current = head;
	if (current == NULL)
	{
		std::cout << "This list is empty\n";
	}
	else
	{
		//traverse list displaying each node
		std::cout<<"The linked list is: \n";
		while (current != NULL)
		{
			std::cout << current->data<<" ";
			current = current->next;
		}

	}
	current = NULL;
	std::cout << std::endl;
}
void doubly::displayReversedList() {
	current = tail;
	//traverse list backwards
	if (tail == NULL)
	{
		std::cout << "This list is empty\n";
	}
	else
	{
		std::cout << "The linked list in reverse is: \n";
		while (current != NULL)
		{
			std::cout << current->data << " ";
			current = current->prev;
		}

	}

	current = NULL;
	std::cout << std::endl;
}