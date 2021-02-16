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

enum command_code {
    eCreate,
    ePush,
    ePop,
    eResize,
	eHelp,
	eQuit
};

void process(string const &);
command_code getCmd(string const &, string &);

int main(void) {

    for (string line; cout << "STACK (" << MyStack.capacity() << "/" << MyStack.size() << ") > " && getline(cin, line); )
    {
		process(line);
    }

    std::cout << "Goodbye.\n";
	return EXIT_SUCCESS;
}

void process(string const & line){		// https://stackoverflow.com/questions/13168833/c-command-line-interface

	string arg = "";

	switch (getCmd(line, arg)){
		case eCreate:
			MyStack.create(stoul(arg));
			break;
		case ePush:
			MyStack.push(stoul(arg));
			break;
		case ePop:
			cout << MyStack.pop() << endl;
			break;
		case eResize:
			MyStack.resize(stoul(arg));
			break;
		case eQuit:
		    std::cout << "Goodbye.\n";
			exit(EXIT_SUCCESS);
			break;
		case eHelp:
		default:
			cout << "Stack usage manual:" << endl;
			cout << "create n - creates stack with n elements capacity" << endl;
			cout << "push n - add element n to stack" << endl;
			cout << "pop - retrieves element from stack" << endl;
			cout << "resize - resize stack for new capacity" << endl;
			cout << "quit - quits session" << endl;
			cout << "PS: all illogical or data lose operations will throw exceptions" << endl;
			break;
	}
}

command_code getCmd (std::string const& inString, string & arg) {

	uint split_pos = inString.find(" ");
	arg	= "";
	if(split_pos != string::npos && split_pos<inString.length()){
		arg = inString.substr(split_pos+1);
	}

    if (inString.find("create") != string::npos && !arg.empty()) 	return eCreate;
    if (inString.find("push") 	!= string::npos && !arg.empty()) 	return ePush;
    if (inString.find("pop") 	!= string::npos) 					return ePop;
    if (inString.find("resize") != string::npos && !arg.empty()) 	return eResize;
    if (inString.find("quit") 	!= string::npos) 					return eQuit;

    else return eHelp;
}
