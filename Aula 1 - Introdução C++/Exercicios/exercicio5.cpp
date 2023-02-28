#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 5.	Escreva um programa que solicite ao usuário um valor inteiro e informe se esse número é par ou ímpar.
	
	int n;
	
	cout << "Olá, forneça um numero inteiro e descubrirei se ele é par ou impar! Duvida? então vamos lá! " << endl << "Forneça o número: ";
	cin >> n;
	
	if(n % 2 == 0){
		
		cout << "O número " << n << " é PAR!";
		
	} else {
		
		cout << "O número " << n << " é IMPAR!";
	} ;
	
	return 0;
}
