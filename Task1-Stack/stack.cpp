/*
 * stack.cpp
 *
 *  Created on: Feb 15, 2021
 *      Author: pavlo
 */

#include "stack.h"

	//create stack with number of elements
	void stack::create(int size){

	}

	//add element to stack
	void stack::push(int value){

		if(_root == nullptr){													// Check if stack initialized
			std::logic_error description("push called for unitialized stack object");
			throw description;
		}


	}

	//get element from stack
	int	 stack::pop(){

		if(_head == 0){															// Check if something in stack to pop
			std::logic_error description("pop called for empty stack object");
			throw description;
		}

		return 0;
	}

	//get amount of elements in stack
	int  stack::capacity(){
		return _head;
	}

	//maximum amount of elements
	int  stack::size(){
		return _size;
	}

	//increase/decrease size of stack
	void stack::resize(){

	}
