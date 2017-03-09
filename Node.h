#pragma once
class Node
{
public:
	int data;
	Node* next;
	Node();
	Node(Node*, const int);
	~Node();
};

