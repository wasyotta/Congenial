#include <iostream>
#include <iostream>
using namespace std;

void selectionSort(int numeros[], int n){

    for( int i=0; i < n-1; i++){
        int indiceDoMenor = i;
        for( int j=i; j< n; j++){
          if (numeros[j] < numeros[indiceDoMenor]){
            indiceDoMenor = j;
          }
        }
        if(i !=indiceDoMenor){
          int aux = numeros[i];
          numeros[i] = numeros[indiceDoMenor];
          numeros[indiceDoMenor] = aux;
        }
    }
}

int main() {
  int vetor[] = {1,2,5,3,7,4,6};
  selectionSort(vetor, 7);

  for(int i=0; i<7; i++){
    cout <<vetor [i]<<" ";
  }
  cout << endl;
}


// é possível implementar também utilizando algo da biblioteca padrão chamada swap() da seguinte forma também dentro do If
//swap(numeros[i], numeros[indiceDoMenor]);