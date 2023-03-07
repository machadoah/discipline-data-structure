#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	Criar um vetor com a 8 elementos e ordená-los.
	*/
	
	int tamanho = 8;
	int v[tamanho];
	
	//Leitura do vetor
	for(int i = 0; i < tamanho; i++) {
		cout << "Insira o " << i+1 << "º elemento:";
		cin >> v[i];
	}
	
	//Ordenação do vetor
//	for(int i = 0; i < tamanho)
	
    
	
	
	return 0;
}
