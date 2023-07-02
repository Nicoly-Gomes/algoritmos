#include <iostream>
#include <cstring>
//Aluna: Nicoly Gomes da Hora, IF23
//Questão para imprimir uma string invertida
using namespace std;
int main() {
  int tamX;
  char aux;
  int p = 1;
  int i = 0;
  char x[50];
  cin.get(x,50);
  tamX = strlen(x);
  while(i < tamX/2) {
    aux = x[i];
    x[i] = x[strlen(x) - p];
    x[strlen(x) - p] = aux;
    i++;
    p++;
  }
  cout << x;
}