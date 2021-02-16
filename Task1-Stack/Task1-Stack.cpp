//============================================================================
// Name        : Task1-Stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "stack.h"

using namespace std;

stack MyStack;

void process(string const & line){		// https://stackoverflow.com/questions/13168833/c-command-line-interface

	switch (line){
		case "create":
			MyStack.create(10);
			break;
		case "push":
			MyStack.push(11);
			break;
		case "pop":
			cout << MyStack.pop() << endl;
			break;
		case "resize":
			MyStack.resize(MyStack.size()*2);
			break;
		case "help":
		default:
			cout << "Stack usage manual:" << endl;
			cout << "create n - creates stack with n elements capacity" << endl;
			cout << "push n - add element n to stack" << endl;
			cout << "pop - retrieves element from stack" << endl;
			cout << "resize - resize stack for new capacity" << endl;
			cout << "PS: all illogical or data lose operations will throw exceptions" << endl;
			break;
	}


}

int main(void) {

    for (string line; cout << "APP > " && getline(cin, line); )
    {
        if (!line.empty()) {
        	process(line);
        }
    }

    std::cout << "Goodbye.\n";
	return EXIT_SUCCESS;
}
