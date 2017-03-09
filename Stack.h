#pragma once
#include "Node.h"

class Stack
{
public:
	Node* top;
	Stack();
	void print();
	void push(int &data);
	void pop();
	bool empty();
	~Stack();
};

