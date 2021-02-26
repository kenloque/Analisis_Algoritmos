#ifndef NODE_H_
#define NODE_H_

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
typedef Node<T>*  pNode;
#endif