#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 9.	Escreva um programa que solicite ao usuário quatro números e mostre na tela o maior, o menor e a média aritmética dos números
	
	double a, b, c, d, ma;
	
	cout << "Informe 4 numeros, lhe informarei o maior o menor a MA (média arirmética).";
	
	cout << endl << "Informe o 1° numero: ";
	cin >> a;
	
	cout << endl << "Informe o 2° numero: ";
	cin >> b;
	
	cout << endl << "Informe o 3° numero: ";
	cin >> c;
	
	cout << endl << "Informe o 4° numero: ";
	cin >> d;
	
	cout << "portanto os numeros são " << a << ", " << b << ", " << c << ", "<< d;
	
	cout << endl;
	
	//MAIOR
	
	if(a >= b && a >= c && a >= d) {
		cout << a << " é o maior";
		
	} else if(b >= a && b >= c && b >= d ) {
		cout << b << " é o maior";
		
	} else if(c >= a && c >= b && c >= d ) {
		cout << c << " é o maior";
		
	} else if(d >= a && d >= b && d >= c) {
		cout << d << " é o maior";
	};
	
	cout << endl;
	
	// MENOR
	
	if(a <= b && a <= c && a <= d) {
		cout << a << " é o menor";
		
	} else if(b <= a && b <= c && b <= d ) {
		cout << b << " é o menor";
		
	} else if(c <= a && c <= b && c <= d ) {
		cout << c << " é o menor";
		
	} else if(d <= a && d <= b && d <= c) {
		cout << d << " é o menor";
	};
	
	cout << endl;
	
	// MA
	
	ma = (a + b + c + d)/a;
	
	cout << "A média aritmética é " << ma;
	
	return 0;
}
