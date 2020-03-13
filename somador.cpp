#include <iostream>
using namespace std;

// Somador de dois números

int main() {
    float soma, valor1, valor2;
    cout << "Digite um valor: ";
    cin >> valor1;
    cout << "Digite o segundo valor: ";
    cin >> valor2;
    soma = valor1+valor2;
    cout << "A soma eh: " << soma <<"\n";
    return 0;
}