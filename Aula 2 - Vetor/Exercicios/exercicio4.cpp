#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	Ler um vetor V de 10 elementos e obter um vetor W cujos componentes são os fatoriais dos respectivos componentes de V. 
	*/
	
	int tamanho = 10;
	
	int v[tamanho];
	int w[tamanho];
	
	// LEITURA DO VETOR V
	
	for(int index = 0; index < tamanho; index ++){
		
		cout << endl << "Insira o " << index+1 << "º elemento do vetor: ";
		cin >> v[index];
	}
	
	// CALCULANDO OS FATORIAIS E PREENCHENDO W
	
	for(int index = 0; index < tamanho; index++) {
		
		int fatorial = 1;
		
		for(int j = 2; j <= v[index]; j++) {
			
			fatorial = fatorial * j;
			
		}
		
		w[index] = fatorial;
		
	}
	
	// EXIBINDO O VETOR W
	
	cout << endl;
	
	for(int i = 0; i < tamanho; i++) {
		cout << endl << "Insira o " << i+1 << "º elemento do vetor v fatorial é: ";
		cout << w[i] << endl;
	}	
	
	return 0;
}
