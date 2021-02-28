#include <iostream>
#include "queue.h"
#include "stack.h"

using namespace std;

typedef struct INTeger{
	int value;
} integer;

class INT{
public:
	int value;
};

int main(){
	//Declaración e inicialización de estructuras
	Queue<integer> mainQ = Queue<integer>(); // funciona con struct
	Stack<INT> mainS = Stack<INT>(); // funciona con clases
	
	//Declaración e inicialización de valores
	integer value1;
	integer value2;
	integer value3;
	INT value4 = INT();
	INT value5 = INT();
	INT value6 = INT();
	value1.value = 1;
	value2.value = 2;
	value3.value = 3;
	value4.value = 1;
	value5.value = 2;
	value6.value = 3;
	
	//Ingreso de valores
	mainQ.queue(value1);
	mainQ.queue(value2);
	mainQ.queue(value3);
	mainS.push(value4);
	mainS.push(value5);
	mainS.push(value6);
	
	//Sacar y mostrar valores
	cout << mainQ.dequeue().value << endl;
	cout << mainQ.dequeue().value << endl;
	cout << mainQ.dequeue().value << endl;
	cout << endl;
	cout << mainS.pop().value << endl;
	cout << mainS.pop().value << endl;
	cout << mainS.pop().value << endl;
	cout << endl;
	return 0;
}
