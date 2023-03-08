#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;


int main(){
	
	/*
	EXERCICIO 3)
	
	Criar uma matriz 2x3. Gerar e imprimir a transposta dessa matriz. 
	A matriz transposta é gerada trocando linha por coluna.
	*/
	
	// DECLARAÇÃO DE VARIÁVEIS
	int A[2][3];
	int tA[3][2];
	
	// POPULAÇÃO DA MATRIZ A
	for(int i = 0; i < 2; i++) {
		
		for(int j = 0; j < 3; j++) {
			
			cout << endl << "Insira o elemento " << i << " x " << j << ": ";
			cin >> A[i][j];
			
		}
	}
	
	// IMPRESSÃO DA MATRIZ
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++ ){
			
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	
	cout <<"\n\n\n";
	
	// CRIAÇÃO DA MATRIZ TRANSPOSTA DE A
	for(int i = 0; i < 2; i++) {
		
		for(int j = 0; j < 3; j++) {
			
			tA[j][i] = A[i][j];	
		}
	}
	
	// IMPRESSÃO DA MATRIZ TRANSPOSTA DE A
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++ ){
			
			cout << tA[i][j] << "\t";
		}
		cout << "\n";
	}
		
	return 0;
}
