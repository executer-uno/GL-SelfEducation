/*
 * stack.cpp
 *
 *  Created on: Feb 15, 2021
 *      Author: pavlo
 */

#include <memory.h>

#include "stack.h"

	//create stack with number of elements
	void stack::create(uint size){
		if(_root != nullptr){													// Check if create called for initialized stack object
			std::logic_error description("create called for itialized stack object");
			throw description;
		}

		_root = new int[size];
		_size = size;
		_head = 0;
	}

	//add element to stack
	void stack::push(int value){

		if((_head < _size) && (_root != nullptr)){
			_root[_head++] = value;
		}
		else{
			if(_root == nullptr){												// Check if stack initialized
				std::logic_error description("push called for unitialized stack object");
				throw description;
			}
			else{																// Check if there are any room left in stack
				std::logic_error description("no free space for another push");
				throw description;
			}
		}
	}

	//get element from stack
	int	 stack::pop(){

		if(_head != 0){															// Check if something in stack to pop
			return _root[--_head];
		}
		else{
			std::logic_error description("pop called for empty stack object");
			throw description;
		}

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
	void stack::resize(uint newsize){

		if(_root == nullptr){													// Check if stack initialized
			std::logic_error description("resize called for unitialized stack object");
			throw description;
		}
		if(newsize < _head){													// Check if data loose will occur
			std::logic_error description("stack size after resize less than stored data size");
			throw description;
		}

		int* swap_temp = _root;

		_root = new int[newsize];

		memcpy(_root, swap_temp, sizeof(swap_temp)* _head);

		delete[] swap_temp;

		_size = newsize;
	}

	stack::~stack(){
		if(_size){
			delete[] _root;
		}
	}
