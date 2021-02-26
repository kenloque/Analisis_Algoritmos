//Kendall Lopez Quesada 201809500

#include <iostream>
#include <map>
using namespace std;

#define VALOR_MENOR -32768
#define SIZE_OF_ARRAY 7
#define BITS_INT 32

/* 1
 * La funcion recibe un arreglo de ints y retorna el mayor
 */
void encuentraMayor(int pValores[]){
	int mayor = VALOR_MENOR;
	int posicionMayor;
	
	if(SIZE_OF_ARRAY > 0){
		for(int contador=0 ; contador<SIZE_OF_ARRAY ; contador++){
			if(pValores[contador] > mayor){
				mayor=pValores[contador];
				posicionMayor = contador;
			}
		}
		printf("El numero mas grande es %d y esta en la posicion %d\n", mayor, posicionMayor);
	}else{
		cout << "El arreglo esta vacio" << endl;
	}
}

/* 2
 * La funcion recibe un arreglo de ints y un int del tamanio
 * retorna un bool de si es o no palindrome
 */
bool arrayPalindrome(bool pArreglo[], int pArraySize){
	bool result = true;
	int left = 0;
	int right = pArraySize-1;
	
	if(pArraySize>0){
		while(left <= right){
			if(pArreglo[left]!=pArreglo[right]){
				result = false;
			}
			left ++;
			right --;
		}
	}
	return result;
}

/* 3
 * La funcion recibe un arreglo de ints y un int del tamanio
 * desplega si un numero en particular es repetido
 */
void encontrarParejas(int pValores[], int pArraySize){
	map<int, int> marcadorParejas;
	if(pArraySize > 0){
		for(int indiceArray = 0 ; indiceArray<pArraySize ; indiceArray++){
			int numeroActual = pValores[indiceArray];
			if(!marcadorParejas[numeroActual]){
				marcadorParejas[numeroActual] = 1;
			}else{
				cout << "El numero " << numeroActual << " tiene pareja" << endl;
				marcadorParejas.erase(numeroActual);
			}
		}
	}else{
		cout << "El arreglo esta vacio" << endl;
	}
}

/* 4
 * La funcion recibe un arreglo de ints y un int del tamanio
 * desplega si un numero unico en particular no es repetido
 */
int encontrarSolo(int pParejas[], int pArraySize){
	int result = 0;
	if(pArraySize > 0){
		for(int indiceArray = 0 ; indiceArray<pArraySize ; indiceArray++){
			result = result ^ pParejas[indiceArray];
		}
		cout << "El numero " << result << " no tiene pareja" << endl;
	}else{
		cout << "El arreglo esta vacio" << endl;
	}	
	return result;
}

/* 5
 * La funcion recibe un int
 * desplega la cantidad de unos que tiene el numero en binario
 */
int contarUnosBinarios(int pEntrada){
	//AND de todos los bits o ver el bit que sale en los corrimientos
	int cantidadUnos = 0;
	for(int contadorBits = 0 ; contadorBits < BITS_INT ; contadorBits++){
		int bitActual = pEntrada%2;
		cout << bitActual;
		if(bitActual == 1 || bitActual == -1){
			cantidadUnos++;
		}
		(pEntrada = pEntrada >> 1);
	}
	cout << endl;
	return cantidadUnos;
}

int main() {
	//1
	cout << "1.\n";
	int numerosArray[SIZE_OF_ARRAY] = {65, -32, 99, 987, -56, 1000, 0};
	encuentraMayor(numerosArray);
	//2
	cout << "2.\n";
	bool palinArray[SIZE_OF_ARRAY] = {true, true, true, false, true, false, true};
	string s = 1>0 ? "0" : "1";
	bool result = arrayPalindrome(palinArray, SIZE_OF_ARRAY);
	printf("El arreglo suministrado %s palindrome\n", result? "es" : "no es");
	//3
	cout << "3.\n";
	int parejasArray[SIZE_OF_ARRAY] = {20, 56, 1, 77, 77, 20, 56};
	encontrarParejas(parejasArray, SIZE_OF_ARRAY);
	//4
	cout << "4.\n";
	encontrarSolo(parejasArray, SIZE_OF_ARRAY);
	//5
	cout << "5.\n";
	int resultado = contarUnosBinarios(VALOR_MENOR);
	printf("El numero posee %d bits en 1\n", resultado);
}