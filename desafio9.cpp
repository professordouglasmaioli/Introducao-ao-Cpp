#include <iostream>

using namespace std;

int main(){
    float* idade1 = new float;
    float* idade2 = new float;
    cout << "Qual e a idade da primeira pessoa?\n";
    cin >> *idade1;
    cout << "Qual e a idade da segunda pessoa?\n";
    cin >> *idade2;

    float* media = new float;
    *media = (*idade1 + *idade2)/2;
    cout << "A media das idades e: " << *media << endl;

    return 0;
}
