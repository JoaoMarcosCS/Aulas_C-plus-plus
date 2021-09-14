#include <iostream>

class Carro{

private:
    int velmax;
    const char* nome;

public:

    int getvelmax()
    {
        return velmax;
    }

    const char* getnome()
    {
        return nome;
    }

    int potencia;

    Carro()
    {

        velmax=800;
        potencia=400;
        nome="Bill";
    }

    Carro(const char* no, int pot):nome(no),potencia(pot){

        if(pot>100)
        {
            velmax=100;
        }else if(pot<100)
        {

            velmax=140;
        }else if(pot==100)
        {

            velmax=180;
        }
    }


};


using namespace std;

main()
{
    Carro c1;//utilizando o construtor sem parametros
    cout<<c1.getvelmax()<<" - "<<c1.potencia<<" - "<<c1.getnome()<<endl;

    Carro c2{"Esportivo",200};
     cout<<c2.getvelmax()<<" - "<<c2.potencia<<" - "<<c2.getnome()<<endl;

	return 0;
}
