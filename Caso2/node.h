#ifndef NODE_H_
#define NODE_H_

#define ptrNode Node<T>*

#include <iostream>

using namespace std;

template <class T>
class Node {
private:
	T* data;
	Node<T>* next;
	
public:
	Node(T &pData){
		this->data = &pData;
		this->next = NULL;
	}
	
	T getValue(){
		return (*this->data);
	}
	
	Node<T>* getNext(){
		return this->next;
	}
	
	void setNext(Node<T>* pNext){
		this->next = pNext;
	}
};
#endif
