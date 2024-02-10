#include <iostream>
#include <string>
using namespace std;

int main(){

    string nome;
    cin >> nome;

    if (nome.size() <= 4){
        cout << "GRUPO A" << endl;
    }else if(nome.size() <= 10){
        cout << "GRUPO B" << endl;
    }else{
        cout << "GRUPO C" << endl;
    }

return 0;
}