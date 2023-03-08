#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;


int main(){
	
	/*
	EXERCICIO 5)
	
	Ler os elementos de uma matriz de ordem 6 
	e imprima o produto dos elementos que estão abaixo da diagonal principal.
	*/
	
	// Declaração de variáveis
	int A[6][6];
	int produto = 1;
	
	// POPULAÇÃO DA MATRIZ A
	for(int i = 0; i < 6; i++) {
		
		for(int j = 0; j < 6; j++) {
			
			cout << endl << "Insira o elemento " << i << " x " << j << ": ";
			cin >> A[i][j];
		}
	}
	
	// CALCULO DO PRODUTO DA MATRIZ
	for(int i = 0; i < 6; i++) {
		
		for(int j = 0; j < 6; j++) {
			
			if(i>j) {
				
				produto = produto * A[i][j];
			}
		}
	}
	
	cout << "A multiplicação dos elementos abaixo da diagonal principal é: "<< produto;
	
			
	return 0;
}
