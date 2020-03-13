#include <iostream>
using namespace std;

int main() {
    int anos, mes, dias, dias_de_vida;

    cout << "Digite a sua idade: ";
    cin >> anos;
    cout << "\nQuantos meses voce tem deste seu ultimo aniversario: ";
    cin >> mes;
    cout << "\nDigite o dia de vida apos o ultimo aniversario: ";
    cin >> dias;
    dias_de_vida = (anos*360)+(mes*30)+dias;
    cout << "\nVoce viveu: " << dias_de_vida << "\n";
    return 0;

}

