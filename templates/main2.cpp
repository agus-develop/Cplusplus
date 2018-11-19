#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//prototipe functions
template < class TIPOD >
void mostrarABS(TIPOD num);
int main() {
	
	int num1 = -23;
	float num2 = -23.56;
	double num3 = 23.4567;
	mostrarABS(num1);
	mostrarABS(num2);
	mostrarABS(num3);
	
	return 0;
}

template < class TIPOD >
void mostrarABS(TIPOD num){

	if(num < 0 ){
		
		num = num * -1;
	}
	
	cout << "El valor absoluto del numero es:"<<num;
	cout <<" \n";
	
}
