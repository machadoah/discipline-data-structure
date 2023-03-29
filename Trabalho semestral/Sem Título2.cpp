#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das funções matemáticas

// include representa os imports

using namespace std; // cout e cin


/*
1. Crie um método do tipo boleano para verificar se um número é positivo e par, 
	crie outro método que entre com números enquanto forem positivos e pares 
	(para isso chame o método já criado) e ao final retorne quantos números foram digitados
*/

bool par_positivo(int number){
	
	if((number > 0)&&(number % 2 == 0)){
		return true;
	}
		return false;
}

int verifica() {
	
	int vezes, cont=0;
	int verificacao;
	do{
		cout << "Insira um numero";
		cin >> verificacao;
		vezes++;
	}
	while(par_positivo(verificacao));
	return vezes-1;
}
int main(int argc, char** argv) {	
	int vezes;
	cout << verifica();
	return 0;
}
