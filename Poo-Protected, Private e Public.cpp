#include <iostream>
#include <locale.h>

using namespace std;

class Veiculo{

public:

    int portas;
    int rodas;

private:// lembrando    que o private só pode ser modificado na classe
    int velmax;
    const char* nome;

protected://o protected é similar ao private, só que o prote é herdado, já o private não
    int potencia;
    const char* cor;

};

class Carro:public Veiculo{
    public:

        //QUANDO ESTAMOS UTILIZANDO HERANÇAS, O PROTECTED NÃO FUNCIONA, SOMENTE QUANDO ESTANCIAMOS UM OBJETO DE UMA CLASSE DENTRO DE OUTRA CLASSE
    Carro(){
    //velmax=100;
    //nome="Cartola";
    potencia=102;
    cor="Roxão";
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

    //QUANDO NÓS ESTAMOS ESTANCIADO UM OBJETO DE OUTRA CLASSE, O PROTECTED NÃO NOS DEIXA ACESSAR AS PROPRIEDADE DO TIPO PROTECTED

    Moto(){
    //velmax=100;
    //nome="Cartola";
    //c.potencia=102;
   // c.cor="Roxão";
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
    Carro v1;//aqui o construtor já vai ser executado
    cout<<endl<<endl;
    Moto v2;

	return 0;
}
