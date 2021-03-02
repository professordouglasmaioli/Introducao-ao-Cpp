#include <iostream>
#include "carro.h"

using namespace std;

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