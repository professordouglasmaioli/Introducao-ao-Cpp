#include <iostream>

using namespace std;

int main(){
    int tamanho, teste;

    do{
        cout << "Digite o tamanho do vetor\n";
        cin >> tamanho;
        float* vetor = new float[tamanho];
        for (int i=0 ; i<tamanho ; i++){
            cout << "Digite o elemento " << i+1 << " deste vetor\n";
            cin >> vetor[i];
        }
        cout << "O vetor inserido e:\n[ ";
        for (int i=0 ; i<tamanho ; i++){
            cout << vetor[i] << " ";
        }
        cout << "]\n";

        cout << "Se deseja inserir outro vetor, digite 1, caso contrário, digite 0\n";
        cin >> teste;

        delete [] vetor;

    } while (teste != 0);

    return 0;
}