#pragma once

class Queue  // Creating a class named Queue.
{
private:
	int front, rear, capacity;
	//int* queue;
	int* queue;

public:
	Queue(); // ctor
	Queue(int c); //param ctor
	~Queue();
    bool IsEmpty(); // To check wheter Queue is empty or not
	bool IsFull(); // To check whether Queue is full or not
    void Enqueue(int x); // Inserts an element in queue at rear end
	void Dequeue(); 	// Removes an element in Queue from front end. 
    void Front(); // Returns element at front of queue. 
	void Print(); // Printing the elements in queue from front to rear. This function is only to test the code.This is not a standard function for Queue implementation.
	
};