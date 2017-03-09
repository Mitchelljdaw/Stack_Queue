#include "stdafx.h"
#include "Queue.h"
#include "Node.h"
#include <string>
#include <iostream>
using namespace std;



Queue::Queue()
{
	front = nullptr;
	rear = nullptr;
}

void Queue::print() {
	cout << "Queue data" << endl;
	Node* p;
	p = front;
	while (p != nullptr) {
		cout << p->data << endl;
		p = p->next;
	}
}
void Queue::append(int &data) {
	if (front != nullptr) {
		Node* newTop = new Node(front, data);
		front = newTop;
		rear = newTop;
	}
	else {
		front = new Node(nullptr, data);
		rear = front;
	}
	cout << " Number:" << front->data << " success" << endl;
}

void Queue::serve() {
	if (front == nullptr) {
		cout << "-------" << "Overflow";
	}
	else if(front->next == nullptr){
		int tempNum = front->data;
		delete front;
		front = nullptr;
		rear = nullptr;
		cout << " Number:" << tempNum << endl;
	}
	else {
		int tempNum = front->next->data;
		Node* temp = front->next;
		delete front;
		front = temp;
		cout << " Number:" << tempNum << endl;
	}
}

void Queue::retrieve() {

}

bool Queue::empty() {
	if (rear == nullptr && front == nullptr) {
		return true;
	}
	else {
		return false;
	}
}



Queue::~Queue()
{
}
