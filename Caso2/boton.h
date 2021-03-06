#ifndef BOTON_H_
#define BOTON_H_

#include "media.h"

class Boton : public IObserver{
	private:
		ptrMedia strategy;
		
    public:
    	Boton(ptrMedia pStrategy){
    		this->strategy = pStrategy;
    	}
    	
    	~Boton(){
    		delete this->strategy;
    	}
    
		void update(string pMsj) override {
			cout << pMsj << endl;
		}
		
		void cambiar(ptrMedia pStrategy){
			this->strategy->detener();
			this->strategy = pStrategy;
			this->strategy->reproducir();
		}
};

typedef Boton* ptrBoton;
#endif
