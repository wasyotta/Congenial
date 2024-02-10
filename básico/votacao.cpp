#include <iostream>
using namespace std;

int main(){
    int N = 18;
            cout<< "Digite a sua idade" << endl;
            cin>> N;
    if (N >= 18){
            
        cout << "Pode votar e ser presa" << endl;
    }else if(N<16){
        cout << "Não pode votar nem ser presa" << endl;
    }else{
        cout<<"Pode votar"<<endl;
    }
    
    return 0; 
}