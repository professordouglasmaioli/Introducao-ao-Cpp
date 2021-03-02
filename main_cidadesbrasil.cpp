#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

int main(){
    cidadesbrasil campinas(1774, 1214000);
    cout << "Campinas:\n";
    cout << "Ano de Fundacao: " << campinas.getano() << endl;
    cout << "Populacao: " << campinas.getpopulacao() << endl;

    cidadesbrasil aracatuba(1908, 198129);
    aracatuba.acrescentapopulacao(1);
    cout << "Aracatuba:\n";
    cout << "Ano de Fundacao: " << aracatuba.getano() << endl;
    cout << "Populacao: " << aracatuba.getpopulacao() << endl;

    system("pause");

    return 0;
}