#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 7.	Escreva um programa que solicite ao usuário um ano qualquer e informe se esse ano é bissexto. 
			
			// Um ano é considerado bissexto se ele for divisível por quatro, mas não por 100. Ou então se ele for divisível por 400.
			
	int ano;
			
	cout << "Você aposta quantos eu descobrir se um ano qualquer é bissexto ou não? Duvida?" << endl << "Vamos lá, informe um ano: ";
	cin >> ano;
	
	
	// divisivel por 4   e   não por 100      ou  divisivel por 400
	if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0) ) {
		cout << "O ano informado é bissexto! portanto, tem 366 dias";
	} else {
		cout << "O ano informado não é bissexto!";
	};
	
	
	return 0;
}
