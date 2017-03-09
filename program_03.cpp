#include "stdafx.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	Queue queue;
	Stack stack;
	string file;
	string command;
	int number;
	cout << "Mitchell Daw|CS:2420|Program #3" << endl;
	cout << "Please enter the file that you want to open:";
	cin >> file;
	ifstream readFile;
	readFile.open(file);
	while (!readFile.eof()) {
		readFile >> command;
		if (command == "append") {
			readFile >> number;
			cout << "Command:" << command;
			queue.append(number);		
		}
		else if (command == "serve") {
			cout << "Command:" << command;
			queue.serve();
		}
		else if (command == "push") {
			readFile >> number;
			cout << "Command:" << command;
			stack.push(number);
		}
		else if(command == "pop"){
			cout << "Command:" << command;
			stack.pop();
		}
	}
	stack.print();
	queue.print();
	system("pause");
}

