#pragma once
#include "Node.h"

class Queue
{
public:
	Node* front;
	Node* rear;
	Queue();
	void append(int &data);
	void serve();
	bool empty();
	void retrieve();
	void print();
	~Queue();
};

