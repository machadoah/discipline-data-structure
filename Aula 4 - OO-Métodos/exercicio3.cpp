#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*

3.	Um número primo é qualquer inteiro divisível por si próprio e por 1. 
	Escreva um método que receba um inteiro positivo e, se este número for primo retorne 1, caso contrário retorne 0.
	
*/

// CHAMADA DO MÉTODOS
int verifica_primo(int numero);


// MÉTODO MAIN
int main(){
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    int numero;
    
    cout << endl << "Olá, insira um numero inteiro e positivo e te direi se ele é impar ou par!: ";
    cin >> numero;
    
    verifica_primo(numero);
	
	return 0;
}

// MÉTODO PRIMO

int verifica_primo(int numero) {
	
	int div = 0;
	
	for(int index = 1; index <= numero; index++){
		
		if(numero % index == 0) {
			div ++;
		}
		
	}
	
	if(div == 2) {
		cout << endl << numero << " é primo!";
		
		return 1;
		
	} else {
		cout << endl << numero << " não é primo!";
		
		return 0;
	}

}



