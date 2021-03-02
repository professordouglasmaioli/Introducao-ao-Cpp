#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

    public:
    //construtor
    carro(int a, float v, float k);
    //get e set
    //ano
    void setano(int a);
    int getano();
    //valor
    void setvalor(float v);
    float getvalor();
    //km
    void setkm(float k);
    float getkm();

};

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
    return 0;
}




    //construtor
    carro::carro(int a=0, float v=-1, float k=-1){
        ano = a;
        valor = v;
        km = k;
    }

    //get e set
    //ano
    void carro::setano(int a){
        ano = a;
        //this->ano = ano;
    }
    int carro::getano(){
        return ano;
    }
    //valor
    void carro::setvalor(float v){
        valor = v;
    }
    float carro::getvalor(){
        return valor;
    }
    //km
    void carro::setkm(float k){
        km = k;
    }
    float carro::getkm(){
        return km;
    }