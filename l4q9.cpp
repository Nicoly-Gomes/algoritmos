#include <iostream>
#include <cstring>
//Aluna: Nicoly Gomes da Hora, IF23
// Questão para contar quantas vezes uma string aparece dentro de outra
using namespace std;
int main() {
  char s1[50];
  char s2 [50];
  char *ps; //armazenar endereço da ocorrência de s2
  cin.get(s1,50);
  setbuf(stdin, NULL);
  cin.get(s2,50);
  ps = strstr(s1,s2); // retorna endereço e salva em ps
  int soma = 0;
  if (ps != NULL) {
    soma++;
    ps = strstr(ps + strlen(s2) + 1, s2);
    while (ps != NULL) {
      soma++;
      ps = strstr(ps + strlen(s2) + 1, s2);
    }
  }
  cout << soma;
}