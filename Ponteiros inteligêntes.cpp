#include <iostream>
#include <memory>
using namespace std;

class Carro
{

public:
    int vel=0;
    int getVel()
    {

        return vel;
    };


    void setVel(int v)
    {
        this->vel=v;
    }
};


main()
{

    //A PRINCIPAL CARACTERISTICA DO PONTEIRO INTELIGENTE É QUE NÃO PRECISAMOS EXCLUI-LO PARA LIBRERAR MEMÓRIA
    int *pnum=new int();//dentro dos parenteses eu poderia colocar algum valor
    unique_ptr<int>pnum2(new int);//é assim que se declara um ponteiro inteligente que vai ser excluido automaticamente
    //além do mais, declarando um ponteiro como unique nós declaramos como um ponteiro unico

    shared_ptr<int>comp1(new int);
    shared_ptr<int>comp2=comp1;//não dá para fazer isso com um ponteiro declarado como unique

    *pnum=11;//no valor de pnum vai ter 10

    cout<<*pnum<<" - "<<&pnum<<endl;


    delete pnum; //para esse tipo de ponteiro eu tenho que colcar o delete para exclui-lo


    //Carro *c1=new Carro();//ponteiro comum

    shared_ptr<Carro>c1(new Carro);
    shared_ptr<Carro>c2=c1;
    //OS DOIS PNTERIOS SÃO UM SÓ
    c2->setVel(12);
    c1->setVel(45);//c1 vai ter 45, pois estão usando o mesmo ponterio, ou seja, se declararmos c1 como 90 depois de c2 igual 34, os doid
    //vão ter 90
    cout<<"Velocidade:"<<c1->getVel()<<endl;
    cout<<"Velocidade:"<<c2->getVel()<<endl;
	return 0;
}
