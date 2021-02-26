#ifndef LIST_H_
#define LIST_H_

#include "node.h"

template <class T>
class List{
private:
	pNode first;
	pNode last;
	
private:
	pNode searchNewLast(){
		pNode auxNode =  this->first;
		while(auxNode->getNext() == this->last){
			auxNode = auxNode->getNext();
		}
		return auxNode;
	}

public:
	List(){
		this->first = NULL;
		this->last = NULL;
	}
	
	void addToEnd(T &pValue){
		pNode newNode = new Node<T>(pValue);
		if(this->last){
			this->last->setNext(newNode);
			this->last = newNode;
		}else{
			this->last = newNode;
			this->first = newNode;
		}
	}
	
	void addToBeginning(T &pValue){
		pNode newNode = new Node<T>(pValue);
		if(this->first){
			newNode->setNext(this->first);
			this->first = newNode;
		}else{
			this->first = newNode;
			this->last = newNode;
		}
	}
	
	T getFirst(){
		return (this->first)->getValue();
	}
	
	T getLast(){
		return (this->last)->getValue();
	}
	
	void deleteFirst(){
		pNode auxNode = this->first;
		if(this->first == this->last){
			this->first = NULL;
			this->last = NULL;
		}else{
			this->first = this->first->getNext();
		}
		delete auxNode;
	}
	
	void deleteLast(){
		pNode auxNode = this->last;
		if(this->first == this->last){
			this->first = NULL;
			this->last = NULL;
		}else{
			this->last = searchNewLast();
		}
		delete auxNode;
	}
};
typedef List<T>*  pList;
#endif