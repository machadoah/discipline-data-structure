#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localização para Português-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	Fazer um programa que digite vários números no vetor de tamanho máximo de 100 elementos, 
	até digitar o número "0". Imprimir quantos números iguais ao último número foram lidos. 
	O limite de números é 100.  Sem considerar o "0" como último número.  
	*/
	
	// IMPORTANTE, ESSE CÓDIGO É TODO COMENTADO POIS TEM FIM PEDAGÓGICO, UM CÓDIGO TODO COMENTADO APARENTE MAIS 'SUJO' POIS O CODIGO DEVE SER CLARO POR SI SÓ
	// SEM A NECESSIDADE DE DIVERSOS COMENTÁRIOS. 
	
	int tamanhoMaximo = 100; // variável responsável por garantir o requisito que o programa não ultrapasse 100 numeros
	double vetor[tamanhoMaximo]; // variável vetor que a principio possui espaço para 100 numeros
	int tamanho; // variável destinada ao tamanho do vetor, pois ele pode ter 100 numero, mas nada garante que ele tenha menos que isso, pois ao digitar o 0, alo é seu maximo.
	double ultimoNumero; // o ultimo numero é responsavel por guardar sempre o ultimo numero digitado, para quando for pesquisar e calcular as vezes que ele foi digitado
	int vezesDigitadasUltimoNumero; // guarda a qualtidade de vezes que o ultimo numero foi digitado
	bool leituraAvanca = true; // variavel booleana se o numero é igual a 0 ou o numero de elementos chegou a 100, para encerrar o vetor
	
	// leitura dos numeros
	
	while (tamanho < tamanhoMaximo && leituraAvanca) {
		// Enquanto o tamanho for menor que o tamanho maximo(100) e a leitura possa contuar
		
		double numero;
		
		cout << endl << "Insira o " << tamanho+1 << "º numero: ";
		cin >> numero;
		
		if(numero == 0 || tamanho == tamanhoMaximo) {
		// Se numero digitado pelo usuário for igual a 0 ou o tamanho atingido ter atingido o maximo proposto(100)
		
			leituraAvanca = false;
			// a leitura encerra resultando a saida do while
		} else {
		  // sendo o numero diferente de 0 e o tamanho diferente do tamanho final proposto
		  
			vetor[tamanho] = numero; // vetor ira armazenar no indice presente o valor inserido pelo usuário
			ultimoNumero = numero; // o valor inserido pelo usuário será guardado dentro da variável ultimo numero
			tamanho++; // tamanho, ou seja, o indice o vetor ira ser incrementado
		}
	}
	
	// Contagem dos numeros iguais
	
	for(int index = 0; index < tamanho; index++) {
	// para o indice 0 até o ultimo digito digitado
		if (vetor[index] == ultimoNumero) {
		// se o indice tiver o valor igual ao ultimo digito
		
			vezesDigitadasUltimoNumero++;
			// somar 1 as vezes que o ultimo numero foi digitado
		}
	}
	
	// Finish
	
	cout << endl << "O ultimo numero digitado foi " << ultimoNumero << " e ao todos ele foi digitado " << vezesDigitadasUltimoNumero << " vezes.";
	
	
	
	return 0;
}
