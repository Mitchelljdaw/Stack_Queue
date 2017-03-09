#include "stdafx.h"
#include "Stack.h"
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

Stack::Stack()
{
	top = nullptr;
}

void Stack::pop() {
	if (top != nullptr) {
		int tempNum = top->data;
		Node* temp = top;
		top = temp->next;
		delete temp;
		cout << " Number:" << tempNum << endl;
	}
	else {
		cout << "stack is empty";
	}
}

void Stack::push(int &data) {
	if (top != nullptr) {
		Node* newTop = new Node(top, data);
		top = newTop;
	}
	else {
		top = new Node(nullptr, data);
	}
	cout <<" Number:" << top->data << " success" << endl;
}

void Stack::print() {
	cout << "Stack data" << endl;
	Node* p;
	p = top;
	while (p != nullptr) {
		cout << p->data << endl;
		p = p->next;
	}
}

bool Stack::empty() {
	if (top == nullptr) {
		return true;
	}
	else {
		return false;
	}
}

Stack::~Stack()
{
	while (!empty()) {
		pop();
	}
}
