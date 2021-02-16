/*
 * stack.h
 *
 *  Created on: Feb 15, 2021
 *      Author: pavlo
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdexcept>

class stack{
private:
	uint  _size = 0;
	uint  _head = 0;
	int* _root = nullptr;

public:
	void create(uint);	//create stack with number of elements
	void push(int);		//add element to stack
	int	 pop();			//get element from stack
	int  capacity();	//get amount of elements in stack
	int  size();		//maximum amount of elements
	void resize(uint);	//increase/decrease size of stack
	void ~stack();		//object destructor
};


#endif /* STACK_H_ */
