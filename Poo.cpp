#include <iostream>
#define x ->
#include <memory>

class Carro{

public:
    int velmax;
    int pot;
    const char* nome;//string moderna

    //JEITO MODERNO
    Carro(const char* nome, int p):nome(nome),pot(p){//lista de incializa��o

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
    /*Carro(const char* nome, int p)//o ocnstrutor n�o precisa de retorno
    {
        this->nome=nome;//faz referencia � vari�vel da classe
        pot=p;//n�o precisamos colocar o this, mas por precao��o n�

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
