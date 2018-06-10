#include "node.h"
#include <iostream>

using namespace std;

class LinkedList { //This is a linked list. It works simply by indexing the tail of the node
public:

	node * head = nullptr;
	node * tail = nullptr;
	int count = 0;

	LinkedList()
	{

	}

	void Enqueue(int val) //Works by simply changing the tail to the new node
	{
		if (head == nullptr)
		{
			head = new node(val, nullptr);
			tail = head;
		}
		else
		{
			tail = new node(val, tail); //creates a new node consisting of a value and the index of the last tail
		}
		count++;
	}

	int Dequeue() //Removes the head by setting it to the index of the link stored by the node. Also returns the head
	{
		if (head != nullptr)
		{
			int temp = head->getValue();
			head = head->link;
			return temp;
		}
		else
		{
			cout << "Error, LinkedList is empty.\n";
			return -1;
		}
	}


	bool isEmpty()
	{
		if (tail == nullptr)
			return true;
	}

	node * getTail()
	{
		return tail;
	}
};
