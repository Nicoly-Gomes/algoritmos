#include <iostream>
using namespace std;
//Aluna: Nicoly Gomes da Hora, IF23
// Questão para imprimir quantos caracteres tem na string
int main() { 
  char x[50];
  int i = 0;
  cin.get(x, 50);
  while (x[i] != '\0') {
    i++;
  }
  cout << i;
}