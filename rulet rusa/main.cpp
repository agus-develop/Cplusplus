#include <iostream>
#include <stdlib.h>
#include <windows.h>
// Archivo fuente de implementación de una clase
#include "Titulo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <wchar.h>
using namespace std;

int main() {
	//instanciamos la clase 'CreateTitulo' para crear un titulo Nuevo
	CreateTitulo titulo_nuevo;
	system("color 0b");	
	const int sleep1 = 10;	
	const int sleep2 = 60;
	int Beepx;
	int Beepy;
	char str[100];
	char grade;
	boolean terminar = false;
	// Create ttitle and '*'			
	titulo_nuevo.CrearHead();
	cout << "\n" << endl;
	system("pause");  		
	system("cls");
	
	do{
		cout << "Elige Dificultad:"<< endl;
		cout << "1.Facil" << endl;
		cout << "2.Normal" << endl;
		cout << "3.Dificil" << endl;
		cout << "4.Epico" << endl;
		cout << "0.Salir" << endl;
		char i;
		
	  	cin >> i;
	  
	
		setlocale(LC_ALL, "");
		switch(i) {
		  case '0' :
		  	 terminar = true;
	         break;
	      case '1' :
	         
	         break;
	      case '2' :
	      	
	         break;
	      case '3' :
	         
	         break;
	      case '4' :
	      
	      break;   
	      default :
	      	 system("cls");
	         cout << "Opción Incorrecta" << endl;
		}//End switch
			
}//Fin de do
while(not terminar);
//Fin Main  	
return 0;
}

 

