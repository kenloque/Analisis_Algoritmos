#ifndef QUEUE_H_
#define QUEUE_H_

#define ptrQueue Queue<T>*

#include "list.h"

template <class T>
class Queue : public List<T>{
public:
	void queue(T &pValue){
		this->addToEnd(pValue);
	}
	
	T dequeue(){
		T element = this->getFirst();
		this->deleteFirst();
		return element;	
	}
};
#endif
