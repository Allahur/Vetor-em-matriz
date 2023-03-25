/*
Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão com os 
mesmo elementos da matriz A, sendo que deverão estar invertidos. Ou seja, o primeiro elemento de 
A passa a ser o último de B, o segundo elemento de A passa a ser o penúltimo elemento de B e 
assim por diante. Apresentar as matrizes A e B lado a lado. 
*/


#include <iostream>
#include <math.h>

using namespace std;

int a[20], b[] = {}; // Valor com o total que pode ser armazenado em A e mostrado em B

int main(){
 
  for(int i = 0; i < 20; i++) // for para iniciar o armazenamento de valores
  {
 cout << "Digite o valor de A: ";
 cin >> a[i];
}
for(int i = 19; i >= 0; i--) // Aqui é interessante porque o resultado vai ser decrescente
{
 b[i] = a[i]; // B é igual ao valor de A onde ele vai mostrar de forma decrescente os valores de A
cout << "\nO valor de B é: " << b[i]; // Resultado
}
return 0;
}
