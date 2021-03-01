#include <iostream>

using namespace std;

int main(){
    int* idade1 = new int;
    int* idade2 = new int;
    cout << "Qual e a idade da primeira pessoa?\n";
    cin >> *idade1;
    cout << "Qual e a idade da segunda pessoa?\n";
    cin >> *idade2;

    float* media = new float;
    *media = (*idade1 + *idade2)/2;
    cout << "A media das idades e: " << *media << endl;

    return 0;
}