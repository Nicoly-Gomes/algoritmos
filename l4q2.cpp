#include <iostream>
using namespace std;
// Aluna: Nicoly Gomes da Hora, IF23
// Questão para ler uma string e imprimir as 4 primeiras letras
int main() {
  char x[50];
  int i = 0;
  cin.get(x,50);
  while(i <= 3) {
    cout << x[i];
    i++;
  }
}