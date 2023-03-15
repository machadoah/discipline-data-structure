#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;


int main(){
	
	int tamanho = 4;
	int table[tamanho][tamanho];
	
	int total = 0;
	
	for(int i = 0; i < tamanho; i++){
		for(int j = 0; j < tamanho; j++ ){
			cout << "Olá, insira o elento " << i << "x" << j << ": ";
			cin >> table[i][j];
			
			if(i == j) {
				total = total + table[i][j];
			}
			
		}
	}
	
	
	cout << endl << "Soma: " << total;
	
	
	
	
	return 0;
}
