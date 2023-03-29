#include <cstdlib> 
#include <iostream>
#include <math.h>


using namespace std; 

// Fornece o tamanho do vetor
int tamanhoVetor() {
	int tamanho = 0;
	
	cout << "Qual o tamanho de vetor: ";
	cin >> tamanho;
	
	return tamanho;
}

// Método que ordena o vetor

void ordenaVetor(int vetor[]){
	
	int tamanho = tamanhoVetor();
	
	int aux;
	
	// Alimenta o vetor
	for(int index = 0; index < tamanho; index++ ){
		
		cout << "insira um número para a posição " << index + 1 << ": ";
		cin >> vetor[index]; 
	}
	
	// Imprime o vetor desordenado
	
	cout << "O Vetor desordenado: " << endl;

	for(int index = 0; index < tamanho; index++ ){
		
		cout << "A posição " << index + 1 << " é : " << vetor[index];
		
		cout << endl;
	}
	
	// ordenação do vetor
	for(int i = 0; i < tamanho; i++) {
		
		for(int j = i + 1; j < tamanho; j++ ){
			
			if(vetor[i] > vetor[j]) {
				
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux; 
				
			}
			
		} 
		
	}
	
		cout << "O Vetor desordenado: " << endl;
	
	// Imprime o vetor ordenado

	for(int index = 0; index < tamanho; index++ ){
		
		cout << "A posição " << index + 1 << " é : " << vetor[index];
		
		cout << endl;
	}
		
}



int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	
	4. Crie um método sem retorno que tenha como 
		parâmetro um vetor cujo o objetivo seja a ordenação desse vetor dentro do método.
	
	*/
	
//	int tamanho = tamanhoVetor();
	
	int vetor[0];
	
	ordenaVetor(vetor);
	
	
	
	
	
	
	return 0;
}
