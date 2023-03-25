/* 
Ler 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de mesma dimensão com os 
elementos da matriz A multiplicados por 3. O elemento B[i] deverá ser implicado pelo elemento 
A[i]*3, o elemento B[2] implicado pelo elemento A[2]*3 e assim por diante, até 8. Apresentar o vetor 
B
*/

#include <iostream>
#include <cmath>

using namespace std;

int a[8], b[8]; // Valores armazenados

int main(){
  
	for(int i = 0; i < 8; i++) // Laço for para armazenar valores
{ 
  cout << "Digite o número " << i + 1 << ": "; // i + 1 quer dizer que será acrescentado +1 a cada linha
       cin >> a[i];
  }
  for (int i = 0; i < 8; i++){
       b[i] = a[i]*3; // Cálculo
       cout << "\n" << b[i]; // Resultado será mostrado aqui
  }
  return 0;
}
