class carro{
    private:
    int ano;
    float valor, km;

    public:
    //construtor
    carro(int a, float v, float k);
    //get e set
    //ano
    void setano(int a);
    int getano();
    //valor
    void setvalor(float v);
    float getvalor();
    //km
    void setkm(float k);
    float getkm();

};