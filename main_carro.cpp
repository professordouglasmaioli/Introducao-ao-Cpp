#include <iostream>
#include "carro.h"

using namespace std;

int main(){
    carro palio(1995, 10000, 150000);
    //palio.setano(1995);
    //palio.setvalor(10000);
    //palio.setkm(150000);
    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: " << palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;

    carro celta(2000, 12000, 95000);
    //celta.setano(2000);
    //celta.setvalor(12000);
    //celta.setkm(95000);
    cout << "Celta: \n";
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getvalor() << endl;
    cout << "Quilometragem: " << celta.getkm() << endl;

    //system("pause");

    return 0;
}