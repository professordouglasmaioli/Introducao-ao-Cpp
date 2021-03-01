#include <iostream>
#include <cstddef>

using namespace std;

//Ponteiros


int main(){
    int var1;
    int* pont1;
    var1=5;
    pont1=&var1;
    cout << "Valor da variavel, atraves do seu nome: " << var1 << endl;
    cout << "Endereca armazenado no ponteiro: " << pont1 << endl;
    cout << "Valor da variavel, atraves do ponteiro: " << *pont1 << endl;

    int var2;
    //var2 = var1;
    //var2 = *pont1;
    //cout << var2;

    //var1=30;
    //*pont1 = 30;
    //cout << var1;

    var2 = 50;
    //pont1 = &var2;
    //cout << *pont1 << endl;
    //cout << var1;

    //int* pont2;
    //pont2 = NULL;
    //cout << *pont2;

    int* pont3 = new int;
    *pont3 = 35;
    //cout << *pont3;

    //*pont3 = *pont1;
    delete pont3;
    pont3 = pont1;
    cout << *pont3;

    return 0;
}
