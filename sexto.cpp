#include <iostream>

using namespace std;

//Estruturas de Repetição - While / Do-While / For

int main(){
    int n;
    cout << "Diga um numero inteiro nao negativo\n";
    cin >> n;

    int soma=0;
    int cont=1;
    //while (cont <= n){
    //    soma+=cont;
    //    cont++;
    //}

    // break

    do{
        soma+=cont;
        cont++;
    } while(cont <= n);

    //for (int j=1 ; j<=n ; j+=1)
    //    soma+=j;
    //    cout << "teste\n";
    
    

    cout << "Soma dos numeros de 0 ate " << n << "= " << soma << endl;

    return 0;
}
