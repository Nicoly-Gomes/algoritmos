#include <iostream>
#include <cstring>
//Aluna: Nicoly Gomes da Hora, IF23
//Questão para  ler duas strings e as imprimir em ordem alfabética
using namespace std;
int main() {
 char x[50];
 char y[50];
cin.get(x,50);
  setbuf(stdin, NULL);
  cin.get(y,50);
  if (strcmp(x,y) < 0) {
    cout << x << endl << y;
  } else {
    cout << y << endl << x;
  }
}