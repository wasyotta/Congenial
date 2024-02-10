#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char operation;
    int  a, b;

    cin >> operation >> a >> b;

    switch (operation)
    {
    case '+':
        cout << a + b <<endl;
        break;
    case '-':
        cout << a - b <<endl;
        break;
    case '*':
        cout << a * b <<endl;
        break;
    case '/':
        cout << fixed << setprecision(1) << (float) a / b <<endl;
        break;
    }
    
    return 0;
}



while (/* condition */)
{
    /* code */
}

