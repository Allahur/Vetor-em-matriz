/* 
Ler duas matrizes A e B do tipo vetor com 15 elementos cada. Construir uma matriz C, sendo esta a 
junção das duas outras matrizes. Desta forma, C deverá ter o dobro de elementos, ou seja, 30. 
Apresentar a matriz C. 
*/

#include <iostream>
#include <math.h>

using namespace std;

int a[15], b[15], c[15]; // Valores armazenados no vetor

int main(){

	for(int i = 0; i < 15; i++)// Laço for com 15 valores a ser armazenados
{ 
		cout << "Digite A, " << i + 1 << "x: ";
cin >> a[i];
	}
	for(int i = 0; i < 15; i++){
		cout << "Digite B, " << i + 1 << "x: "<< endl; // Vezes que vai digitar o valor 
cin >> b[i];

	}
 for(int i = 0; i < 15; i++) // Armazenaar 15 valores
	 {
	c[i] = a[i] + b[i]; // Cálculo para somar os valores armazenados anteriormente
	cout << "\nC: " << c[i]; // Resultado
 }
	return 0;
}
