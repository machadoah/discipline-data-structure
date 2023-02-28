#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	Exercicio 1)
	
	Fazer um programa que leia vários números inteiros e positivos. 
	A leitura se encerra quando encontrar um número negativo ou quando o vetor ficar completo. 
	Sabe-se que o vetor possui, no máximo, 10 elementos. 
	Gerar e imprimir um vetor onde cada elemento é o inverso do correspondente do vetor original.
	
	*/
	
	int tamanhoMaximo = 10;
	int vetor[tamanhoMaximo];
	int tamanho = 0;
	
	
	
	while(tamanho < tamanhoMaximo) {
		
		int numero;
		
		cout << "Insira um numero: ";
		cin >> numero;
		
		if(numero < 0){
			break;
		}
		
		vetor[tamanho] = numero;
		tamanho++;
	}
	
	cout << "Vetor padrão: " << endl;
	
	for (int i = 0; i < tamanho; i++){
		cout << vetor[i] << endl;
	}
	
	cout << "Vetor inverso: " << endl;
	
	for(int i = 0; i < tamanho; i++) {
		cout << (pow(vetor[i], -1));
		cout << endl;
	}
	
	
	return 0;
}
