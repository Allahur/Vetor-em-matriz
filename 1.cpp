# Exibir 10 valores dentro de um vetor em uma matriz.

#include <iostream>

using namespace std; // Pode reduzir a sua linha de comando sem ter que usar std::

int x[10]; /* Vetor com 10 valores que podem ser armazenados */

int main(){

  for(int i = 0; i < 10; i++) // Laço for para iniciar a receber valores
    {
      cout << "Digite o valor "; // Onde inicia o armazenamento valor
			cin >> x[i]; // Ler valor que foi introduzido
    }
	for(int i = 0; i < 10; i++) // Depois de lido, criar um laço for para mostrar os valores
		{
			cout << x[i] << endl; // Onde irá mostrar o resultado!
		}
  return 0;
}
