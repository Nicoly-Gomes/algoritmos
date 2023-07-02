#include <iostream>
#include <cstring>
//Aluna: Nicoly Gomes da Hora
//Questão para ler uma string e imprimir uma mensagem dizendo se ela é um palíndromo ou não
using namespace std;
int main() {
 char x[50];
  int i = 0;
  int p = 1;
  char aux;
  char y[50];
  cin.get(x,50);
  int tamX = strlen(x);
  while (x[i] != '\0') {
    y[i] = x[i]; 
    i++;
  }
  //cout << y << endl;
  i = 0;
  while (i < tamX/2) {
    aux = x[i];
    x[i] = x[tamX - p];
    x[tamX - p] = aux;
  i++;
  p++;
  }
  //cout << x << endl;
  if ( strcmp(x,y) != 0) {
    cout << "não é palíndromo";
  } else {
    cout << "é palíndromo";
  }
}