#include <iostream>
using namespace std;

int main() {
  char operacao;
  double a, b, resultado;

  cin >> operacao >> a >> b; // lê a operação e os valores

  switch (operacao) {
    case '+':
      resultado = a + b;
      break;
    case '-':
      resultado = a - b;
      break;
    case '*':
      resultado = a * b;
      break;
    case '/':
      resultado = round(a / b * 10) / 10; // divide com uma casa decimal de precisão
      break;
    default:
      cout << "Operação inválida" << endl;
      return 0;
  }

  cout << resultado << endl; // imprime o resultado

  return 0;
}