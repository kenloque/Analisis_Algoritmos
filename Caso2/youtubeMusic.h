#ifndef YMUSIC_H_
#define YMUSIC_H_

#include "media.h"

class YoutubeMusic : public Media{
    public:
		void reproducir() override {
			notificar("Encendiendo Youtube Music...");
		}
		
		void detener() override {
			notificar("Apagando Youtube Music...");
		}
};

typedef YoutubeMusic* ptrYoutubeMusic;
#endif
