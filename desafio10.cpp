#include <iostream>

using namespace std;

void troca(int* &pont1, int* &pont2){
    int temp;
    temp = *pont1;
    *pont1 = *pont2;
    *pont2 = temp;
}

int main(){
    int* pont1 = new int;
    *pont1 = 5;
    int* pont2 = new int;
    *pont2 = 7;

    cout << "Ponteiro 1: " << pont1 << " e " << *pont1 << endl;
    cout << "Ponteiro 2: " << pont2 << " e " << *pont2 << endl;

    troca(pont1, pont2);

    cout << "Ponteiro 1: " << pont1 << " e " << *pont1 << endl;
    cout << "Ponteiro 2: " << pont2 << " e " << *pont2 << endl;

    return 0;
}