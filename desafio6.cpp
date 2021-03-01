#include <iostream>

using namespace std;

int main(){
    float gastofamilia[5];
    for (int i=0 ; i<5 ; i++){
        cout << "Digite os gastos da familia " << i+1 << endl;
        cin >> gastofamilia[i];
    }
    float media=0;
    for (int i=0 ; i<5 ; i++){
        media+=gastofamilia[i];
    }
    media/=5;
    cout << "Media de gastos: " << media << endl;

    for (int i=0 ; i<5 ; i++){
        if (gastofamilia[i] < media){
            cout << "A familia " << i+1 << " tem gastos abaixo da media\n";
        } else if (gastofamilia[i] == media){
            cout << "A familia " << i+1 << " tem gastos na media\n";
        } else{
            cout << "A familia " << i+1 << " tem gastos acima da media\n";
        }
    }

    return 0;
}