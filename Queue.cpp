//queue.cpp
#include <iostream>
#include "Queue.h"

using namespace std;

// Default Constructor - set front and rear as -1. We are assuming that for an empty Queue, both front and rear will be -1.

Queue::Queue()
{
	std::cout << "Default ctor\n";
	front = 0;
	rear = 0;
	queue = new int;
}

Queue::Queue(int c)
{
	std::cout << "Param ctor\n";
	front = 0;
	rear = 0;
	capacity = c;
	queue = new int;
}

Queue::~Queue()
{
	std::cout << "Destructor\n";
	delete[] queue; 
}

bool Queue::IsEmpty()
{
	if (front == rear)
	{
		cout << "\nQueue is  empty\n";
		return true;
	}
	else
		return false;
}

bool Queue::IsFull()
{
	if (capacity == rear) 
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
		queue[rear] = x;
		rear++;
	}
	return;
}

void Queue::Dequeue()
{
	cout << "Dequeuing \n";
	if (IsEmpty())
	{
		cout << "Error: Queue is Empty\n";
		return;
	}
	else if (front == rear)
	{
		rear = front = 0;
	}
	else
	{
		for (int i = 0; i < rear - 1; i++) {
			queue[i] = queue[i + 1];
		}
		rear--;
	}
	return;
}

void Queue::Front()
{
	if (front == rear)
	{
		cout << "Error: cannot return front from empty queue\n";
		return;
	}
		cout << "\nFront Element is: %d", queue[front];
	return;
}

void Queue::Print()
{
	int i;
	if (front == rear) {
		cout << "\nQueue is Empty\n";
		return;
	}
		// traverse front to rear and print elements 
	cout << "Current Queue: ";
	for (i = front; i < rear; i++) {
		cout << queue[i] << " ";
	}
	cout << endl;
	return;
}

