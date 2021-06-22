#pragma once
class doubly
{
	struct node
	{
		int data;
		node * next;
		node * prev;
	};

	typedef node* ptr;

	//key node
	ptr head;
	ptr tail;
	ptr current;

public:
	//contructor
	doubly();

	//add node
	void addNode(int data);

	//delete node
	void deleteNode(int data);

	//display list
	void displayList();

	//display reveresed list
	void displayReversedList();
		


	
};

