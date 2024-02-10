#include <iostream>

using namespace std;

void swap(int vetor[], int i, int j){
  int aux = vetor[i];
  vetor[i] = vetor[j];
  vetor[j] = aux;
}

int main(){

  int n;
  cin>> n;
  int vetor[n];

  for(int i=0; i<n; i++){
    cin>> vetor[i];
  }
  for(int i=0; i< n/2; i++){
    swap(vetor, i, n-i-1);
  }

  for(int i=0; i<n; i++){
    cout<< vetor[i] << " ";
  }
  cout <<endl;
  return 0;
}