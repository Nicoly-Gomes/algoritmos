#include <iostream>
#include <cstring>
//Aluna: Nicoly Gomes da Hora, IF23
//Questão para receber uma string S e dois valores inteiros não negativos i e j. Em seguida, imprimir os caracteres contidos no segmento que vai de i a j da string S
using namespace std;
int main() {
  int aux;
  int cont;
  char S[50];
  int i, j;
  cin.get(S,50);
  cin >> i >> j;
  cont = i;
  while (i < 0 || j < 0) {
    cout << "digite apenas números positivos";
    cin >> i >> j;
  }
  if ( i > j) {
    aux = i;
    i = j;
    j = aux;
  }
  cont = i;
  while(cont < j) {
    cout << S[cont];
    cont ++;
  }
}