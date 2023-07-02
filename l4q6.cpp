#include <iostream>
#include <iostream>
using namespace std;
//Aluna: Nicoly Gomes da Hora, IF23
//Questão para ler uma string do teclado e contar quantas vogais ela possui. Entrar com um caractere (vogal ou consoante) e substituir todas as vogais da palavra por esse caractere. Ao final, imprimir a nova string e o número de vogais que ela possui.

int main() {
  int vogais = 0;
  int i = 0;
  int s = 0;
  char x[50];
  char subs;
  cin.get(x,50);
  while (x[i] != '\0') {
    if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u') {
      vogais++ ;
  }
    i++;
}
  cin >> subs;
  while (x[s] != '\0'){
    if  (x[s] == 'a' || x[s] == 'e' || x[s] == 'i' || x[s] == 'o' || x[s] == 'u') {
      x[s] = subs;
    }
    s++;
  }
  cout << x << endl;
  cout << vogais;
}