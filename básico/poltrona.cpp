#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int tickets[N];

  for(int i=0; i< N; i++){
    cin >> tickets[i];
  }

  int winningTicket;
  cin>> winningTicket;

  int winnersArmchair = -1;

  for(int i=0; i < N; i++){
    if(tickets[i] == winningTicket){
      winnersArmchair = i;
      break;
    }
  }

   if(winnersArmchair == -1){
      cout<< "Não há vencedor"<<endl;
    }else{
      cout<<"Número da poltrona do vencedor: " << winnersArmchair <<endl;
    }
  return 0;
}