#include <iostream>

using namespace std;

int main(){
    float renda;
    int idade;
    cout << "Qual e a sua idade?\n";
    cin >> idade;
    cout << "Qual e a sua renda?\n";
    cin >> renda;

    if (idade >= 21 && renda < 1200){
        cout << "Voce esta apto a participar do programa!\n";
    } else{
        cout << "Voce nao pode participar do programa!\n";
    }

    return 0;
}