#include <iostream>
#include <locale.h>

using namespace std;

class Veiculo{

public:

    int portas;
    int rodas;

private:// lembrando    que o private s� pode ser modificado na classe
    int velmax;
    const char* nome;

protected://o protected � similar ao private, s� que o prote � herdado, j� o private n�o
    int potencia;
    const char* cor;

};

class Carro:public Veiculo{
    public:

        //QUANDO ESTAMOS UTILIZANDO HERAN�AS, O PROTECTED N�O FUNCIONA, SOMENTE QUANDO ESTANCIAMOS UM OBJETO DE UMA CLASSE DENTRO DE OUTRA CLASSE
    Carro(){
    //velmax=100;
    //nome="Cartola";
    potencia=102;
    cor="Rox�o";
    portas=4;
    rodas=4;



        //cout<<velmax<<endl;
        cout<<potencia<<endl;
        cout<<rodas<<endl;
        cout<<portas<<endl;
        cout<<cor<<endl;
      //  cout<<nome<<endl;





        }
};

class Moto{

public:
    Carro c;//estou estanciando um objeto do tipo carro

    //QUANDO N�S ESTAMOS ESTANCIADO UM OBJETO DE OUTRA CLASSE, O PROTECTED N�O NOS DEIXA ACESSAR AS PROPRIEDADE DO TIPO PROTECTED

    Moto(){
    //velmax=100;
    //nome="Cartola";
    //c.potencia=102;
   // c.cor="Rox�o";
    c.portas=4;
    c.rodas=4;



        //cout<<velmax<<endl;
      //  cout<<c.potencia<<endl;
        cout<<c.rodas<<endl;
        cout<<c.portas<<endl;
        //cout<<cor<<endl;
      //  cout<<nome<<endl;
    }
};
main()
{
    setlocale(LC_ALL,"portuguese");
    Carro v1;//aqui o construtor j� vai ser executado
    cout<<endl<<endl;
    Moto v2;

	return 0;
}
