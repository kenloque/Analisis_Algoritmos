#ifndef TELEVISOR_H_
#define TELEVISOR_H_

#include "media.h"

using namespace std;

class Televisor : public Media{
	public:
		void reproducir() override {
			notificar("Encendiendo el televisor...");
		}
		
		void detener() override {
			notificar("Apagando el televisor...");
		}
};

typedef Televisor* ptrTele;
#endif
