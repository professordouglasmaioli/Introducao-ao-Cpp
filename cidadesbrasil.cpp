#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

    cidadesbrasil::cidadesbrasil (int a=0, int p=0){
        ano = a;
        populacao = p;
    }

    void cidadesbrasil::setano (int a){
        ano = a;
    }

    int cidadesbrasil::getano (){
        return ano;
    }

    void cidadesbrasil::setpopulacao (int p){
        populacao = p;
    }

    int cidadesbrasil::getpopulacao (){
        return populacao;
    }

    void cidadesbrasil::acrescentapopulacao (int p){
        populacao+=p;
    }