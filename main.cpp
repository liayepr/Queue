#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue Q; // creating an instance of Queue. 
	Queue q(4);
	q.Print();
	q.Enqueue(20); 
	q.Enqueue(10); 
	q.Enqueue(30); q.Print();
	q.Dequeue(); q.Print();
	Queue q1(q);
		
	system("pause");
}
