#ifndef HERANÇA_H_INCLUDED
#include <iostream>
#define HERANÇA_H_INCLUDED

using namespace std;

class Veiculo{
	
	public:
		int rodas;
		int vel;
		int blind;
		void setvelmax(int vl);
		void settipo(int tp);
		void setarma(bool ar);
		void imp();//aqui não precisamos criar um get, pois essa função já está na classe, então pcom ela podemos
		//alterar as prorpiedades privadas
		private:
			
			int tipo;
			int velmax;
			bool arma;
};

class Carro:public Veiculo{

	public:
		Carro();
};

Carro::Carro()
{
		vel=0;
		blind=0;
		rodas=4;
		setarma(true);
		setvelmax(180);
		settipo(2);
}
void Veiculo::imp()
{
	cout<<"Tipo de veiculo:"<<tipo<<endl;
	cout<<"Blindagem:"<<blind<<endl;
	cout<<"Rodas:"<<rodas<<endl;
	cout<<"Armas:"<<arma<<endl;
	cout<<"Velocidade maxima:"<<velmax<<endl;
}

void Veiculo::setarma(bool ar)
{
	arma=ar;
}

void Veiculo::settipo(int tp)
{
	tipo=tp;
}

void Veiculo::setvelmax(int vl)
{
	velmax=vl;
}

class Moto:public Veiculo{//Está herdadno as propriedades de Veiculos
	
	public:
		Moto();
		
		private:
			
			
};

	Moto::Moto()
	{
		vel=0;
		blind=0;
		rodas=2;
		setarma(false);
		setvelmax(120);
		settipo(1);
	}

#endif
