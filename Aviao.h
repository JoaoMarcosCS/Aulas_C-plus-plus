#ifndef AVIAO_H_INCLUDED
#include <iostream>
#define AVIAO_H_INCLUDED

using namespace std;


class Aviao{
	
	public:
	int vel=0;
	int velmax;
	string tipo;//aqui temos que colcoar :: pois �o podemos utilizar o namespace std
	Aviao(int tp);//aqui n�o colocamos void nem nada pq est� criando  a fun��o no m�todo construtor7
	void mostra();//Tamb�m podemos criar m�todos desse modo
	
	private:
		
};

void Aviao::mostra(){
	
	cout<<"Tipo:"<<tipo<<endl;
	cout<<"Velocidade m�xima:"<<velmax<<endl;
	cout<<"Velocidade atual:"<<vel<<endl;
}

Aviao::Aviao(int tp)
{
	switch(tp)
	{
		case 1:velmax=350;tipo="Jato";break;//aqui n�o precismos usar o this
		case 2:velmax=450;tipo="Monomotor";break;
		case 3:velmax=100;tipo="Planador";break;
	}
}

#endif//c�digo base de um arquivo cabe�alho

