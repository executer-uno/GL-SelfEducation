/*
 * stack.cpp
 *
 *  Created on: Feb 15, 2021
 *      Author: pavlo
 */

#include "stack.h"

	//create stack with number of elements
	void stack::create(int){

	}

	//add element to stack
	void stack::push(int){

	}

	//get element from stack
	int	 stack::pop(){


		std::logic_error description("Reinit leads to memory leaking");
		throw description;

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
