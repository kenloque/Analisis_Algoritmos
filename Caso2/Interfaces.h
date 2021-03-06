#ifndef INTERFACES_H_
#define INTERFACES_H_

#include <iostream>

using namespace std;

class IObserver{
    public:
        virtual void update(string pMsj) = 0;
};

class IObservable{
    public:
        virtual void registrar(IObserver * observador) = 0;
        virtual void borrar(IObserver * observador) = 0;
        virtual void notificar(string pMsj) = 0;
};

class IStrategy {
	public:
		virtual void reproducir() = 0;
		virtual void detener() = 0;
};
#endif
