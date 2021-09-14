#include <iostream>

using namespace std;

class Veiculo{

private:
    const char* nome;
    const char* cor;

public:

    int velmax;
    int rodas;

    void setcor(const char* cor1)
    {

        cor=cor1;
    }

    void setnome(const char* nome1)
    {
        nome=nome1;
    }

    const char* getnome()
    {
        return nome;
    }

    const char* getcor()
    {

        return cor;
    }

    virtual void imp()//usamos o virtual para dizermos que podemos modificar ese metodo em outras classes derivadas
    {
        cout<<"Nome:"<<nome<<endl;
        cout<<"Cor:"<<cor<<endl;
        cout<<"Rodas:"<<rodas<<endl;
        cout<<"Velocidade maxima:"<<velmax<<endl;
    }


};

class Moto:public Veiculo{
    public:
    Moto()
    {
        setnome("Moto");
        setcor("Azul");
        rodas=2;
        velmax=120;
    }
};

class Carro:public Veiculo{
    public:
    Carro()
    {
        setnome("Carro");
        setcor("Preto");
        rodas=4;
        velmax=220;
    }
};

class Militar:public Veiculo{

    public:

        int municao;
        bool armamento;

        Militar(bool armas, int mu):municao(mu),armamento(armas){

        setnome("Blindado");
        setcor("Verde");
        rodas=6;
        velmax=80;

        municao=(armas)? mu : 0;
        }

        void imp() override//temos que por também o override para podermos modificar o metodo da class mãe
    {
        cout<<"Nome:"<<getnome()<<endl;//temos que por getcor porque são privados
        cout<<"Cor:"<<getcor()<<endl;
        cout<<"Rodas:"<<rodas<<endl;
        cout<<"Velocidade maxima:"<<velmax<<endl;
        cout<<"Munição:"<<municao<<endl;
        cout<<"Armamento:"<<armamento<<endl;
    }
};


 int main()
{
    Carro c1;
    c1.imp();

    Moto m1;
    m1.imp();

    Militar t1{false,200};
    t1.imp();

    Militar t2{true, 600};
    t2.imp();


	return 0;
}
