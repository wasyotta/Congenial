#include <iostream>
using namespace std;

void bubleSort(int numeros[], int n){
  bool trocou = false;

  do{
    trocou = false;
    
      for(int i=0; i < n-1; i++){
        int primeiroNumero = numeros[i];
        int segundoNumero = numeros[i+1];
    

      if( segundoNumero <primeiroNumero){
        numeros[i] = segundoNumero;
        numeros[i+1] = primeiroNumero;

        trocou = true;
      }
    }
  }while(trocou);
}

int main(){
  int vetor[] = {8, 3, 6, 9, 14, 2, 5};
  bubleSort(vetor, 7);

  for (int i=0; i<7; i++){
    cout<< vetor[i]<< " ";
  }
  cout <<endl;
}