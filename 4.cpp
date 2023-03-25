/* 
Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando a 
seguintes lei de formação: “Todo elemento de B deverá ser o quadrado do elemento de A 
correspondente”. Apresentar as matrizes A e B. 
*/

#include <iostream>
#include <cmath>

using namespace std;

int a[15]; // Vetor com 15 valores
int b[] = {}; // Vetor vazio porque vai ser armazenado valor nele

int main() {

	for(int i = 0; i < 15; i++) // Laço for para armazenar 15 valores
{
		cout << "Digite o valor " << i + 1 << ": "; // +1 valor a cada linha para acrescentar um valor
		cin >> a[i];
	}
	for(int i = 0; i < 15; i++)
{
b[i] = pow(a[i], 2); // Cálculo onde o pow() é a potência 
cout << "\nB: " << b[i] << endl; // Resultado
	}
	return 0;
}
