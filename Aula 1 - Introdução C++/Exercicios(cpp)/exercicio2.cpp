#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 2.	Crie um programa que solicite ao usuário os lados de um retângulo e informe a sua área.
	
	double base, altura, area;
	
	cout << "Informe a largura do retângulo(em m²): ";
	cin >> base;
	cout << endl;
	
	cout << "Informe a altura do retângulo(em m²): ";
	cin >> altura;
	cout << endl;
	
	area = base * altura;
	
	cout << "A área de um retângulo de base " << base << " m² e altura " << altura << " m² é " << area << " m²";
	
	return 0;
}
