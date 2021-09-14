#ifndef AVIAO_H_INCLUDED
#include <iostream>
#define AVIAO_H_INCLUDED

using namespace std;


class Aviao{
	
	public:
	int vel=0;
	int velmax;
	string tipo;//aqui temos que colcoar :: pois ão podemos utilizar o namespace std
	Aviao(int tp);//aqui não colocamos void nem nada pq está criando  a função no método construtor7
	void mostra();//Também podemos criar métodos desse modo
	
	private:
		
};

void Aviao::mostra(){
	
	cout<<"Tipo:"<<tipo<<endl;
	cout<<"Velocidade máxima:"<<velmax<<endl;
	cout<<"Velocidade atual:"<<vel<<endl;
}

Aviao::Aviao(int tp)
{
	switch(tp)
	{
		case 1:velmax=350;tipo="Jato";break;//aqui não precismos usar o this
		case 2:velmax=450;tipo="Monomotor";break;
		case 3:velmax=100;tipo="Planador";break;
	}
}

#endif//código base de um arquivo cabeçalho

