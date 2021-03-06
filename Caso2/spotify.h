#ifndef SPOTIFY_H_
#define SPOTIFY_H_

#include "media.h"

class Spotify : public Media{
    public:
		void reproducir() override {
			notificar("Encendiendo spotify...");
		}
		
		void detener() override {
			notificar("Apagando spotify...");
		}
};

typedef Spotify* ptrSpotify;
#endif
