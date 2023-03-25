/* 
Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma matriz C, onde cada 
elemento de C é a subtração do elemento correspondente de A com B. Apresentar a matriz C. 
*/

#include <iostream>
#include <cmath>

using namespace std;

int a[20], b[20], c; // Valor a ser armazenado

int main(){

	for(int i = 0; i < 20; i++) // Laço for para iniciar o armazenamento dos vetores
{
		cout << "Digite 20 números aleatórios para A: " << endl; 
		cin >> a[i];
		}
	for(int i = 0; i < 20; i++) // Laço for com o mesmo propósito anterior
{
		cout << "Digite 20 números aleatórios para B: " << endl; // endl é tipo um quebra linha
    cin >> b[i];
		}
	for(int i = 0; i < 20; i++)
{
		c = a[i] - b[i]; // Cálculo
		cout << "\nC: " << c << endl; // Resultado
	}
	return 0;
}
