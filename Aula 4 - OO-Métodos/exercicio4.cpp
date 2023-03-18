#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*

4.	Escreva um método que receba o ano e retorne 1 se for bissexto e 0 se não for. 
	Um ano é bissexto quando divisível por 4, mas não por 100. Um ano também é bissexto quando divisível por 400.
	
*/

// MÉTODO ANO BISSEXTO

int calcula_bissexto(int ano){
	
	if(((ano % 4 == 0) && (ano % 100 != 0)) || ano % 400 == 0 ){
		return 1;
		
	} else {
		
		return 0;
	}
	
}

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





