#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 8.	Crie um programa que solicite ao usuário os três ângulos de um triângulo e informe se este é um triângulo:  
			// equilátero;	
			// isósceles;
			// escaleno.
			
	double a, b, c;
	
	cout << "Me informe os angulos de um triangulo e lhe informarei se le é equilatero ou isosceles ou escaleno";
	
	cout << endl << "Equilatero, tringulo que possui os três angulos iguais.";
	cout << endl << "Isósceles, tringulo que possui pelo menos dois angulos iguais (note então que o equilatero é um caso especial de isosceles!!).";
	cout << endl << "Escaleno, tringulo que os três angulos diferentes.";
	
	cout << endl << "Informe o angulo 'a' do triangulo: ";
	cin >> a;
	
	cout << endl << "Informe o angulo 'b' do triangulo: ";
	cin >> b;
	
	cout << endl << "Informe o angulo 'c' do triangulo: ";
	cin >> c;
	
	if ((a + b + c) != 180) {
		cout << endl << "Os angulos não formam um triângulo, pois sua somatório deve ser igual a 180°.";
	} else if(a == b && b == c) {
		cout << endl << "O trinagulo tem obviamente os três angulos iguais a 60°, portanto é isosceles pois pelo menos dois deles são iguais, e equilatero pois os três são iguais.";
	} else if (a == b || a == c || b == c){
		cout << "O triangulo é isosceles, pois dois angulos são iguais.";
	} else {
		cout << endl << "O triangulo é escaleno, todos seus angulos são diferentes.";
	};
	
	return 0;
}
