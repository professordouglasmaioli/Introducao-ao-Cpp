#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, medturma;
    cout << "Digite a nota 1:\n";
    cin >> n1;
    cout << "Digite a nota 2:\n";
    cin >> n2;
    cout << "Digite a nota 3:\n";
    cin >> n3;
    cout << "Digite a media da turma";
    cin >> medturma;

    float mediaaluno=(n1+n2+n3)/3;
    cout << "A media final do aluno e: " << mediaaluno << endl;

    if (mediaaluno < medturma){
        cout << "O aluno esta abaixo da media!";
    } else if (mediaaluno == medturma){
        cout << "O aluno esta na media!";
    } else{
        cout << "O aluno esta acima da media!";
    }

    return 0;
}