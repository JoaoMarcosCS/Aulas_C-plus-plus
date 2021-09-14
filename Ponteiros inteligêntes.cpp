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

    //A PRINCIPAL CARACTERISTICA DO PONTEIRO INTELIGENTE � QUE N�O PRECISAMOS EXCLUI-LO PARA LIBRERAR MEM�RIA
    int *pnum=new int();//dentro dos parenteses eu poderia colocar algum valor
    unique_ptr<int>pnum2(new int);//� assim que se declara um ponteiro inteligente que vai ser excluido automaticamente
    //al�m do mais, declarando um ponteiro como unique n�s declaramos como um ponteiro unico

    shared_ptr<int>comp1(new int);
    shared_ptr<int>comp2=comp1;//n�o d� para fazer isso com um ponteiro declarado como unique

    *pnum=11;//no valor de pnum vai ter 10

    cout<<*pnum<<" - "<<&pnum<<endl;


    delete pnum; //para esse tipo de ponteiro eu tenho que colcar o delete para exclui-lo


    //Carro *c1=new Carro();//ponteiro comum

    shared_ptr<Carro>c1(new Carro);
    shared_ptr<Carro>c2=c1;
    //OS DOIS PNTERIOS S�O UM S�
    c2->setVel(12);
    c1->setVel(45);//c1 vai ter 45, pois est�o usando o mesmo ponterio, ou seja, se declararmos c1 como 90 depois de c2 igual 34, os doid
    //v�o ter 90
    cout<<"Velocidade:"<<c1->getVel()<<endl;
    cout<<"Velocidade:"<<c2->getVel()<<endl;
	return 0;
}
