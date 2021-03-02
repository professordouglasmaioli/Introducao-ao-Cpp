#include <iostream>

using namespace std;

class propaganda{
    private:

    public:

    void inscrever(){
        cout << "Se inscreva no Canal do Professor Douglas Maioli!\n";
    }

    void curta(){
        cout << "Curta esse video e ative o sininho!\n";
    }

};

int main(){
    propaganda canal;
    canal.inscrever();
    canal.curta();

    return 0;
}