#include <iostream>
#include <stdlib.h> //new
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int **puntero_matriz,nFilas,nColumnas;
//prototipo de función
void PedirDatos();
void MostrarDatos(int **,int nFilas,int nColumnas);//Matriz ,nfilas,ncolumnas
void LiberarDatos();

int main() {
	/* PUNTEROS */
	int *ptx;
	int *ptx2;
	int **ptx3;
	//*********/
	int X = 15;
	ptx = &X;
	int Y = 200;
	ptx2 = &Y;
		
	/* Matriz*/
	int filas = 3;
	int columnas = 2;



	cout << "Núm1: "  << *ptx << "\n";
	cout << "Núm2: "  << *ptx2 << "\n";	
		PedirDatos();
		MostrarDatos(puntero_matriz,nFilas,nColumnas);
		LiberarDatos();
		
	

	  // an array with 3 rows and 2 columns. 
   
  	 cout << "\n" <<endl; 
    // output each array element's value 
    
		
	return 0;
}


void PedirDatos(){
	cout << "Escriba el numero de Filas " <<endl;
	cin >>nFilas;
	cout << "Escriba el número de Columnas "<<endl;
	cin >>nColumnas;
	
	
	//Resevrar memmoria
	puntero_matriz = new int*[nFilas];// Cada fila tendrá que señalar su columna ,Reservamos memoria para las filas
	for(int i =0;i<nFilas;i++){
		puntero_matriz[i] = new int[nColumnas];//reservar memoria para las columnas	
	}
	
	for(int i =0;i<nFilas;i++){
		for(int j =0;j<nColumnas;j++){
			cout <<"Escriba un numero ["<<i<<"["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
			//cin>>puntero_matriz[i][j];
		}
	}
	
}

void MostrarDatos(int **puntero_matriz,int nFilas,int nColumnas){//Matriz ,nfilas,ncolumnas

	
		for(int i =0;i<nFilas;i++){
			for(int j =0;j<nColumnas;j++){
					//cout<<*(*(puntero_matriz+i)+j)<<" ";
					cout << puntero_matriz[i][j];		
			}
			cout<<"\n";
	
		}
}

void LiberarDatos(){
		for(int i=0;i<nFilas;i++){
			
			delete[] puntero_matriz[i];
		}
			delete[] puntero_matriz;
}
