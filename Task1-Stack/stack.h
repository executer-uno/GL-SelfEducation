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
	int  _size = 0;
	int  _head = 0;
	int* _root = nullptr;

public:
	void create(int);	//create stack with number of elements
	void push(int);		//add element to stack
	int	 pop();			//get element from stack
	int  capacity();	//get amount of elements in stack
	int  size();		//maximum amount of elements
	void resize();		//increase/decrease size of stack
};


#endif /* STACK_H_ */
