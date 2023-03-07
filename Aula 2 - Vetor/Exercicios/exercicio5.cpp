#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	Criar um programa que leia dados de um vetor de 12 elementos inteiros.
	Imprima o maior e menor sem ordenar, o percentual de números pares e a média dos elementos do vetor. 
	*/
	
	int tamanho = 12;
	int vetor[tamanho];
	int maior = vetor[0]; // assumimos que o 1º elemento é o maior/menor
	int menor = vetor[0];
	int soma = 0;
	double media = 0;
	double percentual = 0;
	int contador = 0;
	
	// Alimentando o vetor
	for(int i = 0; i < tamanho; i++) {
		cout << "Insira o " << i+1 << "º elemento do vetor: ";
		cin >> vetor[i];
	}
	
	// Maior valor
	for(int i = 1; i < tamanho; i++) {
		
		if(vetor[i] > maior) {
			maior = vetor[i];
		}
	}
	
	cout << endl << "O maior é o " << maior;
	
	// Menor valor
	for(int i = 1; i < tamanho; i++) {
		
		if(vetor[i] < menor) {
			menor = vetor[i];
		}
	}
	
	cout << endl << "O menor é o " << menor;
	
	// Percentual de números pares
	for(int i = 0; i < tamanho; i++) {
		
		if(vetor[i] % 2 == 0) {
			contador++;
		}
	}
	
	percentual = (double)contador/tamanho;
	cout << endl << "O percentual de numeros pares é de " << percentual;
	
	// Média dos elementos
	for(int i = 0; i < tamanho; i++) {
		soma = soma + vetor[i];
	}
	
	media = (double)soma/tamanho;
	
	cout << endl << "A media dos numeros é de " << media;
	
	
	
	return 0;
}
