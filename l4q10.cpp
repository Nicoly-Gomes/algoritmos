#include <iostream>
#include <cstring>
//Aluna: Nicoly Gomes da Hora, IF23
//Questão para ler uma string do teclado e mostrar um menu para o usuário escolher se quer converter para maiúsculo ou minúsculo.
using namespace std;
int main() {
  int i = 0;
  int resp;
  char x[50];
  cin.get(x,50);
  cout << "1. Converter para maiúsculo (digite 1)" << endl;
  cout << "2. Converter para minúsculo (digite 2)" << endl;
  cin >> resp;
  if (resp == 1) {
    while ( x[i] != '\0') {
      x[i] = toupper (x[i]);
      i++;
    }
  } else {
   while ( x[i] != '\0') {
     x[i] = tolower(x[i]);
     i++;
   }
  }
  cout << x;
}