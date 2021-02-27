#include <iostream>

using namespace std;

int fat(int x){
    int fatorial=1;
    for (int i=1 ; i<=x ; i++){
        fatorial*=i;
    }
    return fatorial;
}

int main(){
    int n;
    while (true){
    cout << "Informe um numero inteiro positivo!\n";
    cin >> n;
    if (n <= 0){
        cout << "O numero informado e negativo!\n";
    } else{
        break;
    }
    }

    int valorfat = fat(n);
    cout << "O valor do fatorial de " << n << " e: " << valorfat << endl;

    return 0;
}