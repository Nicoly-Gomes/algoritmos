#include <iostream>
#include <cstring>
//Aluna: Nicoly Gomes da Hora, IF23
//Questão para ler duas strings e imprimir uma mensagem informando se a segunda string lida está contida dentro da primeira
using namespace std;
int main() {
 char a[50];
 char b[50];
 char * pont;
  cin.get(a,50);
  setbuf(stdin, NULL);
  cin.get(b,50);
  pont = strstr(a,b);
  if (pont != NULL) {
    cout << "a segunda palavra está contida na primeira";
  } else {
    cout << "a segunda palavra não está contida na primeira";
  }
}