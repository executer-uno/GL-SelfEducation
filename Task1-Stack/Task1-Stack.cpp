//============================================================================
// Name        : Task1-Stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>

#include "stack.h"

using namespace std;

int main(void) {

	stack MyStack;

	MyStack.create(10);

	for(int i=0; i<10; i++){
		MyStack.push(i);
	}

	for(int i=0; i<10; i++){
		cout << MyStack.pop() << endl;
	}

	for(int i=10; i<20; i++){
		MyStack.push(i);
	}

	MyStack.resize(MyStack.size()*2);

	for(int i=10; i<20; i++){
		MyStack.push(i);
	}

	for(int i=0; i<20; i++){
		cout << MyStack.pop() << endl;
	}

	cout << "Done" << endl;

	return EXIT_SUCCESS;
}
