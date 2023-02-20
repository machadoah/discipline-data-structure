#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 3.	Crie um programa que solicite ao usuário os lados de um triângulo e informe a sua área. 
	
		// será utilizado a formula de Heron
		
		// S = 0.5 * (a+b+c) <- semiperimetro
		
		// Area = sqrt(s*(s-a)*(s-b)*(s-c))
	
	double a , b , c , s , area ;
		
	cout << "Olá, tudo bem? Imagine um triângulo com lados 'a', 'b' e 'c' com seus comprimentos em m².";
	cout << endl << "Informe a (em m²): ";
	cin >> a;
	
	cout << endl << "Informe b (em m²): ";
	cin >> b;
	
	cout << endl << "Informe c (em m²): ";
	cin >> c;
	
	s = ((a+b+c)/2); // semiperimetro
	
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	cout << endl << "A área de um triângulo de lados " << a << ", " << b << " e " << c << " possui área igual a " << area << ".";
	
	return 0;
}
