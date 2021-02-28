#ifndef STACK_H_
#define STACK_H_

#define ptrStack Stack<T>*

#include "list.h"

template <class T>
class Stack : public List<T>{
public:
	void push(T &pValue){
		this->addToEnd(pValue);
	}
	
	T pop(){
		T element = this->getLast();
		this->deleteLast();
		return element;	
	}
};
#endif
