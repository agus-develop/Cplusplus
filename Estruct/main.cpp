#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


struct Persona{
	char Nombre[30];
	int Edad;
}persona,*puntero_persona = &persona;

void PedirDatos();
void MostrarDatos(Persona *);

int main() {
	
	PedirDatos();
	MostrarDatos(puntero_persona);
	
	return 0;
}
void PedirDatos(){
	cout<<"Introduzca su nombre: "<<endl;
	//cin.getline(persona.Nombre,30,'\n');
	cin.getline(puntero_persona -> Nombre,30,'\n');
	cout<<"Introduzca su Edad: "<<endl;
	cin>>puntero_persona ->Edad;

}

void MostrarDatos(Persona *puntero_persona){
	cout<<"Nombre: "<<puntero_persona->Nombre <<endl;
	cout<<"Nombre: "<<puntero_persona->Edad <<endl;
	
}
