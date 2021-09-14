#include <iostream>
#define x ->
#include <memory>

class Carro{


private:

    int velmax;
    void setvelmax(int v)
    {

        this->velmax=v;
    }

public:

    int pot;
    const char* nome;//string moderna



    int getvelmax(){
        return velmax;
    }
    Carro(const char* nome, int p):nome(nome),pot(p){//lista de incialização

    if(p>100)
        {
            setvelmax(150);
        }else if(p<100)
        {

            setvelmax(100);
        }else if(p==100)
        {

            setvelmax(110);
        }
    }
};


using namespace std;

main()
{


    unique_ptr<Carro>c1(new Carro{"Cartola",192});
    cout<<c1->nome<<" - "<<c1->getvelmax()<<" - "<<c1->pot ;
    //c1.velmax pode ser mudada desse modo, mas não queremos mudar a velocidade maxiama, então temos que declara-la como private
    Carro c2{"Junior",890};
     cout<<endl<<c2.nome<<" - "<<c2.getvelmax()<<" - "<<c2.pot ;


	return 0;
}
