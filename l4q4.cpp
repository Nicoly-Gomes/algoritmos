#include <iostream>
using namespace std;
//Aluna: Nicoly Gomes da Hora, IF23
//Questão para imprimir a string de trás para frente
int main() {
  int i = 0;
  int t = 0;
 char x[50];
  cin.get(x,50);
  while(x[i] != '\0') {
    i++;
  } 
  while ( i >= t){
    cout << x[i];
    i--;
  }
}