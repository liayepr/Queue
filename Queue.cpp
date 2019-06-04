//queue.cpp
#include <iostream>
#include "Queue.h"

using namespace std;


Queue::Queue(int c)
{
	std::cout << "Param ctor\n";
	rear = -1;
	capacity = c;
	queue = new int[c];
}

Queue::Queue(const Queue& other)
{
	std::cout << "Copy ctor\n";
	rear = other.rear;
	capacity = other.capacity;
	queue = new int[capacity];
	for (int i = 0; i <= rear; i++) {
		queue[i] = other.queue[i];
	}
}

Queue::Queue(Queue&& other)
{
	std::cout << "Move ctor\n";
	rear = other.rear;
	capacity = other.capacity;
	queue = other.queue;

	other.rear = -1;
	other.capacity = 0;
	other.queue = nullptr;
}

Queue::~Queue()
{
	std::cout << "Destructor\n";
	delete[] queue; 
}

bool Queue::IsEmpty()
{
	if (rear == -1) {
		cout << "\nQueue is  empty\n";
		return true;
	} else {
		return false;
	}
}

bool Queue::IsFull()
{
	if (capacity == rear + 1) 
	{
		cout << "\nQueue is full\n";
		return true;
	}
	else
	    return false;
}

void Queue::Enqueue(int x)
{
	cout << "Enqueuing " << x << " \n";
	if (IsFull())
	{
		cout << "Error: Queue is Full\n";
		return;
	}
	else
	{
		queue[++rear] = x;
	}
}

void Queue::Dequeue()
{
	cout << "Dequeuing \n";
	if (IsEmpty())
	{
		cout << "Error: Queue is Empty\n";
		return;
	}
	else
	{
		for (int i = 0; i < rear; i++) {
			queue[i] = queue[i + 1];
		}
		rear--;
	}
}

void Queue::Front()
{
	if (IsEmpty())
	{
		cout << "Error: cannot return front from empty queue\n";
		return;
	}
	cout << "\nFront Element is: %d", queue[0];
}

void Queue::Print()
{
	int i;
	if (IsEmpty()) {
		cout << "\nQueue is Empty\n";
		return;
	}
		// traverse front to rear and print elements 
	cout << "Current Queue: ";
	for (i = 0; i <= rear; i++) {
		cout << queue[i] << " ";
	}
	cout << endl;
	return;
}

