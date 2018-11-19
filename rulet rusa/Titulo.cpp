// Archivo fuente de implementación de una clase
#include "Titulo.h"
#include <iostream> // Incluimos iostream para usar std::cout
#include <wchar.h>
#include <locale.h>
#include <windows.h>


void CreateTitulo::gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y = y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 
 void CreateTitulo::CrearHead(){
 	//
 	int gotX[] = {46,47,50,51,52,53,54,56,57,59,60,62,63,64,65,66,67};
	char charA[] = { 'E','L', 'J','U','E','G','O','D','E','L','A','M','U','E','R','T','E'};
	string anio = "2018";
	
	for(int i = 0; i <= 119; i++){ 
    	CreateTitulo::gotoxy(i,0);cout <<"*"; Sleep(2);
        } 
        cout << endl; 
    for(int y = 0; y < 1; y++){ 
    	CreateTitulo::gotoxy(47,1); cout << "*Factoria SHADOW'S..'*" << endl;Sleep(3);
        } 
    for(int y = 0; y < 1; y++){ 
    	CreateTitulo::gotoxy(50,2); cout << "*PRESENTA!!'*" << endl; Sleep(3);
        }         
    for(int i = 0; i <= 119; i++){ 
    	CreateTitulo::gotoxy(i,3);cout <<"*"; Sleep(4);
        }
        
	int limite = (sizeof(gotX)/sizeof(gotX[0]));
	for(int i=0;i<limite;i++){
		CreateTitulo::gotoxy(gotX[i],10);cout<<(charA[i]);Sleep(180);
	}
		cout << "\n" << endl;
		CreateTitulo::gotoxy(53,11);cout<<(anio);Sleep(180);
}
