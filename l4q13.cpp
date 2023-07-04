#include <iostream>
#include <cstring>
using namespace std;
//Aluna: Nicoly Gomes da Hora, IF23
//Questão para criar um programa que faça uso do Código de César
int main(){
  char inicio[50]; 
  int i= 0;
  char x[50];
  int ande;
  char *nova = x;
  cout << "Digite a frase: ";
  cin.get(x, 50);
  cout << "Digite o número de casas: ";
  cin >> ande;
  while(x[i] != '\0') {
    inicio[i] = x[i];
    i++; 
  }
  i= 0;
  while(x[i] != '\0'){
    if(x[i] != 32){
        if(x[i]+ande > 122){
          nova[i] = x[i] - 26;
          nova[i] += ande;
        }else
          nova[i] = x[i] + ande;
      }else{
        nova[i] = ' ';
      }
      i++;
  }
  cout << nova << endl;
  cout << inicio << endl;
}