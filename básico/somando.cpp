#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n; // lê o tamanho da lista
  int sum = 0; // inicializa a variável acumuladora
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x; // lê o próximo elemento da lista
    sum += x; // adiciona o elemento à soma
  }
  cout << sum << endl; // imprime a soma total
  return 0;
}