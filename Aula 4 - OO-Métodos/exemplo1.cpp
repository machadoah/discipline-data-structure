#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

// CHAMADA DO MÉTODOS
double soma(int primeiro_numero, int segundo_numero);


// MÉTODO MAIN
int main(){
	
	int minha_idade, irmao_idade;
	
	cout << endl << "Insira sua idade: ";
	cin >> minha_idade;
	
	cout << endl << "Insira a idade do seu irmão: ";
	cin >> irmao_idade;
	
	cout << endl << "A idade do seu irmão somada com a sua é: " << soma(minha_idade,irmao_idade);
	
	
	return 0;
}


// MÉTODO SOMA
double soma(int primeiro_numero, int segundo_numero){
	
	double resultado = primeiro_numero + segundo_numero;
	
	return resultado;
	
}
