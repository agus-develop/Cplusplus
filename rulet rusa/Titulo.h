//Definición de la clase persona -> archivo "Titulo.h"
//siempre es buena idea usar macros del preprocesador para evitar compilar varias veces el mismo archivo
#define TITULO_H
#include <string>
using namespace std;
class CreateTitulo //Declaramos la clase con el nombre Persona
{ 
public:      //a patir de aquí todas las declaraciones serán de acceso público
  int x,y;
  Titulo(const string& nombre,int edad, float peso, float estatura); // Constructor
  void CrearHead();
  void gotoxy(int x,int y);
};

