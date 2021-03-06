#ifndef MEDIA_H_
#define MEDIA_H_

#include <iostream>
#include <list>
#include "Interfaces.h"

using namespace std;

class Media : public IObservable, IStrategy{
    private:
    	list <IObserver *> observers;
    
    public:
        virtual void reproducir() = 0;
        virtual void detener() = 0;
        
        void registrar(IObserver* pObservador){
		    observers.push_back(pObservador);
		}
		
		void borrar(IObserver* pObservador){
		    observers.remove(pObservador);
		}
		
		void notificar(string pMsj){
		    for (list<IObserver *>::iterator observador = observers.begin(); observador != observers.end(); ++observador){
		        (*observador)->update(pMsj);
		    }
		}
		
};
typedef Media* ptrMedia;
#endif
