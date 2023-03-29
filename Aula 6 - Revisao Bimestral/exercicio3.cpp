#include <cstdlib> 
#include <iostream>
#include <math.h>

using namespace std;

/*Faça um método que verifique quantas vezes um número é 
divisível pelo intervalo de 1 até ele mesmo, ele será um dados passado como parâmetro do método */

// Método que calcula as vezes que um numero n é divisivel no intervalo inteiro de 1 até n
int numeroDivisoes (int number) {
	
	int vezes = 0 ;
	
	for(int index = 1; index <= number; index++) {
		
		if(number % index == 0) {
			vezes++;	
		}		
	}	
	return vezes;	
}


int main(int argc, char** argv) {
	
	int number;
	
	cout << "Digite um numero: ";
	cin >> number;
	
	cout << endl << "O numero " << number << " teve " << numeroDivisoes(number) << " divisoes de 1 ate ele.";
	
	return 0;
}
