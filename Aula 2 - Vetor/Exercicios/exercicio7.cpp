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
	
	int tamanho = 7;
    int vetor1[tamanho], vetor2[tamanho], vetorResultado[tamanho];
    char vetorOperacao[tamanho];

    // Leitura dos elementos dos vetores
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o elemento " << i+1 << " do vetor 1: ";
        cin >> vetor1[i];
    }

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o elemento " << i+1 << " do vetor 2: ";
        cin >> vetor2[i];
    }

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o elemento " << i+1 << " do vetor de operacao (+, -, *, /): ";
        cin >> vetorOperacao[i];
    }

    // Realização das operações
    for (int i = 0; i < tamanho; i++) {
        switch (vetorOperacao[i]) {
            case '+':
                vetorResultado[i] = vetor1[i] + vetor2[i];
                break;
            case '-':
                vetorResultado[i] = vetor1[i] - vetor2[i];
                break;
            case '*':
                vetorResultado[i] = vetor1[i] * vetor2[i];
                break;
            case '/':
                vetorResultado[i] = vetor1[i] / vetor2[i];
                break;
            default:
                cout << "Operacao invalida para o elemento " << i+1 << endl;
        }
    }

    // Impressão do vetor resultado
    cout << "Vetor resultado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetorResultado[i] << " ";
    }
    cout << endl;
	
    
	
	
	return 0;
}
