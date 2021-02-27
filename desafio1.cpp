#include <iostream>

using namespace std;

//f(x)=x^2-3x+5 // f(2)=2^2-3.2+5

float f(float x){
    float valor;
    valor = x*x - 3*x + 5;
    return valor;
}

int main(){
    float a;
    cout << "Digite um numero real\n";
    cin >> a;
    float valorf = f(a);
    cout << "O valor da funcao no ponto " << a << " e igual a " << valorf << endl;

    return 0;
}