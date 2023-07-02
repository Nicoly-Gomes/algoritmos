#include <iostream>
#include <cstring>
//Aluna: Nicoly Gomes da Hora, IF23
//Questão para ler o nome e o valor de determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.
using namespace std;
int main() {
  float desconto;
  char r;
  float valor;
  char nome[50];
  float valorT;
  cout << "nome da mercadoria: " << endl;
  cin.get(nome, 50);
  setbuf(stdin,NULL);
  cout << "valor: " << endl;
  cin >> valorT;
  cout << "pagamento à vista? (digite s para sim ou n para não)" << endl;
  cin >> r;
  while( r != 's' && r != 'n') {
    cout << "Erro. Digite s para sim ou n para não " << endl;
    cin >> r;;
   setbuf(stdin,NULL);
  }
  if (r == 's') {
    desconto = 0.1*valorT;
    valor = valorT - desconto;
    cout << "nome: " << nome << endl;
    cout << "valor total: " << valorT << endl;
    cout << "valor do desconto: " << desconto << endl;
    cout << "valor a ser pago à vista: " << valor << endl;
  } else {
    desconto = 0;
    valor = valorT - desconto;
    cout << "nome: " << nome << endl;
    cout << "valor total: " << valorT << endl;
    cout << "valor do desconto: " << desconto << endl;
    cout << "valor a ser pago: " << valor << endl;
  }
 
}