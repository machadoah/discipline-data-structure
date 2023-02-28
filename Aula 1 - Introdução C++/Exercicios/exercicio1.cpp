#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 1.	Crie um programa que solicite ao usuário os três coeficientes de uma equação do segundo grau e informe os valores de x’ e x’’.
	
	double a = 0;
	double b = 0;
	double c = 0;
	
	double x1,x2;
	
	cout << "Informe o valor do coeficiente de x²: ";
	cin >> a;
	
	cout << "Informe o valor do coeficiente angular: ";
	cin >> b;
	
	cout << "Informe o valor do coeficiente linear: ";
	cin >> c;
	
	// ax² + bx + c = 0
	
	// delta = b² - 4 * a * c
	
	double delta;
	delta = (b * b - 4 * a * c);
	
	if (delta < 0) {
		cout << "A equação não possui raizes reais";
		
	} else if (delta == 0){
		cout << "A equação possui raizes iguais, portanto x’ = x’’"	;
		
		x1 = ((-b + sqrt(delta))/2 * a);
		
		cout << "x’ e x’’ são iguais a: " << x1 << endl;
	} else {
		cout << "A equação possui reais e distintas." << endl;
		
		x1 = ((-b + sqrt(delta))/2 * a);
	
		x2 = ((-b - sqrt(delta))/2 * a);
		
		cout << "x’ e igual a: " << x1 << endl;
	
		cout << "x’’ e igual a: " << x2 << endl;
	};
	
	return 0;
}
