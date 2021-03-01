#include <iostream>

using namespace std;

int main(){
    int l, c;
    cout << "Qual e a quantidade de linhas?\n";
    cin >> l;
    cout << "Qual e a quantidade de colunas?\n";
    cin >> c;

    float matriz1[l][c], matriz2[l][c];
    cout << "Digite abaixo os elementos da matriz 1:\n";
    for (int i=0 ; i<l ; i++){
        for (int j=0 ; j<c ; j++){
            cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite abaixo os elementos da matriz 2:\n";
    for (int i=0 ; i<l ; i++){
        for (int j=0 ; j<c ; j++){
            cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
            cin >> matriz2[i][j];
        }
    }

    float matrizsoma[l][c];
    for (int i=0 ; i<l ; i++){
        for (int j=0 ; j<c ; j++){
            matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "A soma entre estas duas matrizes e: \n";

    for (int i=0 ; i<l ; i++){
        for (int j=0 ; j<c ; j++){
            cout << matrizsoma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}