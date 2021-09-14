#include <iostream>
#define x ->
#include <memory>

class Carro{

public:
    int velmax;
    int pot;
    const char* nome;//string moderna

    //JEITO MODERNO
    Carro(const char* nome, int p):nome(nome),pot(p){//lista de incialização

    if(p>100)
        {
            velmax=150;
        }else if(p<100)
        {

            velmax=100;
        }else if(p==100)
        {

            velmax=110;
        }
    }





    //JEITO ANTIGO
    /*Carro(const char* nome, int p)//o ocnstrutor não precisa de retorno
    {
        this->nome=nome;//faz referencia à variável da classe
        pot=p;//não precisamos colocar o this, mas por precaoção né

        if(p>100)
        {
            velmax=150;
        }else if(p<100)
        {

            velmax=100;
        }else if(p==100)
        {

            velmax=110;
        }

    }
        */
};


using namespace std;

main()
{

    //Antigo-Carro *c1=new Carro("Cartola",100);
    unique_ptr<Carro>c1(new Carro{"Cartola",192});
    cout<<c1->nome<<" - "<<c1->velmax<<" - "<<c1->pot ;


    //antigo- delete c1;

	return 0;
}
