#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*

5.	Desenvolver um programa onde você entre via teclado com dois valores e após a digitação o usuário escolha um seletor de opção (menu) com as seguintes opções:

	- Multiplicação;

	- Adição;

	- Divisão;

	- Subtração;

	- Fim do processo;

	Obs. Criar um método para cada opção e dentro do case chamar as funções respectivamente.
	
*/

// MÉTODO MULTIPLICAÇÃO

double multiplicacao(double x, double y){
	
	cout << endl << "Insira o 1º número: ";
	
	return 
}

// MÉTODO ADIÇÃO

// MÉTODO DIVISÃO

// MÉTODO SUBTRAÇÃO



// MÉTODO MAIN
int main(){
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    int ano;
    cout << endl << "Insira o ano: ";
    cin >> ano;
    
    if (calcula_bissexto(ano) == 1) {
    	cout << endl << ano << " é bissexto";
    	
	} else {
		cout << endl << ano << " não é bissexto";
	}

	
	return 0;
}

