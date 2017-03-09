#include "stdafx.h"
#include "Node.h"


Node::Node()
{
	next = nullptr;
	data = 0;
}


Node::Node(Node* p, const int _data)
{
	next = p;
	data = _data;
}



Node::~Node()
{
}
