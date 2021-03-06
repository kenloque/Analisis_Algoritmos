#ifndef RADIO_H_
#define RADIO_H_

#include "media.h"

class Radio : public Media{
    public:
		void reproducir() override {
			notificar("Encendiendo la radio...");
		}
		
		void detener() override {
			notificar("Apagando la radio...");
		}
};

typedef Radio* ptrRadio;
#endif
