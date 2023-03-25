/* 
Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. Construir uma 
matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter a capacidade de 
armazenar 50 elementos. Apresentar a matriz C. 
*/


#include <iostream>
#include <cmath>

using namespace std;

int a[20], b[30], c[50]; // Valores onde cada vai ser armazenado para o C

int main() {

	for(int i = 0; i < 20; i++) // for para armazenar o valor de A
{
		cout << "A " << i + 1 << "x: " << endl;
    cin >> a[i];
	}
	for(int i = 0; i < 30; i++) // for para armazenar o valor de B
{
		cout << "B " << i + 1 << "x: " << endl;
    cin >> b[i];
	}
	for(int i = 0; i < 50; i++) // for para mostrar o valor em C
{
    if(i < 20){
      c[i] = a[i]; // Caso valor de A seja menor que 20
    }
      else{
        c[i] = b[i - 20]; // caso o B seja um valor menor que 20
        }
    cout << c[i] << "\nC: "; // Valor a ser mostrado
		}
	return 0;
	}
