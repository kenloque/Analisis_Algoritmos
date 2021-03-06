#include <iostream>

#include "boton.h"
#include "televisor.h"
#include "radio.h"
#include "spotify.h"
#include "youtubeMusic.h"

using namespace std;

void mostrarMenu(){
/* Uso: Esta funcion despliega el menu principal del programa demostrando las diferentes opciones que se pueden escoger.
 * Datos de entrada: No recibe ninguno.
 * Datos de salida/resultado de la operacion: Despliega el menu principal.
*/
	printf("\n\nMenú:\n=====\n\n");
	printf("1.- Television\n");
	printf("2.- Radio\n");
	printf("3.- Spotify\n");
	printf("4.- Youtube Music\n");
	printf("5.- Salir\n\n");
	printf("Elija una fuente por favor: ");
	fflush(stdout);
}

int main(){
/* Uso: Es la funcion main().
 * Datos de entrada: Ninguno.
 * Datos de salida/resultado de la operacion: Es la funcion main().
*/	
	// Declaración de los datos a utilizar
	int opcion;
	ptrTele strategyTele= new Televisor();
	ptrRadio strategyRadio = new Radio();
	ptrSpotify strategySpotify = new Spotify();
	ptrYoutubeMusic strategyYM = new YoutubeMusic();
	ptrBoton cliente = new Boton(strategyTele);
	
	// Agregar el cliente como observador de las estrategias
	strategyTele->registrar(cliente);
	strategyRadio->registrar(cliente);
	strategySpotify->registrar(cliente);
	strategyYM->registrar(cliente);
	
	//Ciclo de ejecución
	do {
		mostrarMenu();
		cin >> opcion;
		switch ( opcion ) {
			case 1:cliente->cambiar(strategyTele); break;
			case 2:cliente->cambiar(strategyRadio);	break;
			case 3:cliente->cambiar(strategySpotify); break;
			case 4:cliente->cambiar(strategyYM); break;
			case 5: exit( 1 );
			default:
				printf( "Opción no válida\n" );
				break;

		}

	} while (opcion!=5);
}
