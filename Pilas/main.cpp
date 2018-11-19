#include <iostream>
#include <stdlib.h>
#include <conio.h>
/* Pilas son un conjunto de estructuras que solo se puede eliminar por un extremo llamado Cima, LIFO(último en entrar, primero en salir)
	-insertar -> Push
	-Quitar -> Pop
 */

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//PROTOTYPE FUNCTIONS
void AgregarPila(Nodo *&,int);
void SacarPila(Nodo *&, int &n);

int main() {
	
	int num;

	Nodo *pila = NULL;
	cout<<"Agregue numero a la pila : "<<endl;
	cin>>num;
	AgregarPila(pila,num);
	
	cout<<" Agregue numero a la pila : "<<endl;
	cin>>num;
	AgregarPila(pila,num);
	
	cout<<" Sacando numero de la pila : "<<endl;
	
	while(pila != NULL){ //mientras no sea el final de la pila...
	
		//continue...
		if(pila!=NULL){
			SacarPila(pila,num);
			cout<<num<<endl;
		}else{
			cout<<"."<<endl;
		}
		
	}

	
	return 0;
}
void AgregarPila(Nodo *&pila,int n){
	
	Nodo *nuevo_nodo = new Nodo(); //reservamos memoria para un nuevo Nodo. 1
	nuevo_nodo->dato = n;//Agregamos datos al NODO 2
	nuevo_nodo->siguiente  = pila;//sigiuiente al ser el 1 es NUll no hay otra 3
	pila = nuevo_nodo; //4
	cout<<"Elmento: "<< n  <<" Agregado a la pila correctamente."<<endl;
}

void SacarPila(Nodo *&pila,int &n){
	

	Nodo *aux = pila; //AUX ES PUNTERO DE TIPO NODO QUE ESTÁ SEÑALANDO A LA PILA, 
	n = aux->dato; // QUEREMOS EL DATO , POR LO QUE AUX APUNTA AL DATO DE LA PILA OJO se nos queda atrás!por eso el auxiliar
	pila = aux->siguiente;//pila apunta al siguiente nodo
	delete aux;// borramos Aux para borrar el dato, y listo
		
	
}
