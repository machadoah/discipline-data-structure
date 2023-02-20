#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 4.	Crie um programa que solicite ao usuário os lados de um trapézio e informe a sua área.
	
	double A, B, b, h;
	
		// A = (((B + b) * h)/2)
		
	cout << "Olá tudo bem? imagine um trapézio, ele possui bases paralelas na horizontal e são separadas por uma dado comprimento que é a altura do trapézio. ";
	cout << endl << "Forneça o valor da base inferior do trapézio(em m²): ";
	cin >> B;
	
	cout << endl<< "Forneça o valor da base superior do trapézio(em m²): ";
	cin >> b;
	
	cout << endl << "Forneça o valor da altura do trapézio(em m²): ";
	cin >> h;
	
	A = (((B + b) * h)/2);
	
	cout << endl << "A área do trapézio é " << A;
	
	return 0;
}
