#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	/*
		6. Escreva um programa que solicite ao usuário a idade de uma pessoa e informe se essa pessoa é:  
			- criança (0 a 11 anos)
			- adolescente (12 a 17 anos)
			- adulta (18 a 49 anos)
			- idosa (a partir de 50 anos). 
	*/
	
	double idade;
	
	cout << "Olá, tudo bem?" << endl << "Me informe sua idade que irei te informar (perante dados fornecidos) em qual faixa etária você faz parte: ";
	cin >> idade;
	
	if (idade <= 11) {
		cout << "Você é criança, pois está na faixa etária de 0 a 11 anos.";
	} else if (idade <= 17) {
		cout << "Você é adolescente, pois está na faixa etária de 12 a 17 anos.";
	} else if (idade <= 49) {
		cout << "Você é adulto, pois está na faixa etária de 18 a 49 anos.";
	} else {
		cout << "Você é idoso, pois está em uma faixa etária superior a 50 anos.";
	};
		
	return 0;
}
