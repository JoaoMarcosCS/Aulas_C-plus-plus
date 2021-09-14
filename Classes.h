#ifndef CLASSES_H_INCLUDED
#include <iostream>
#define CLASSES_H_INCLUDED

using namespace std;

class Veiculo{
	
	public:
	int velmax;
	int tipo;
	Veiculo(int tp);//Veiculo é um metodo construtor, pois assim que eu declaro uma variavel dessa classe, o metodo contrutor
	//já é chamdo
	int getVelMax();
	bool setLigado(int l);
	bool getLigado();
	
	private:// os métodos ou variáveis do tipo private, só podem ser alteradas na classe, o usuário não pode altera-las
	//caso isso ocorra, a variavel ou metodo não é privado 
	void setVelMax(int vm);
	string nome;
	int vel;
	bool ligado;	
		
};

bool Veiculo::getLigado()
{
	return ligado;
}

bool Veiculo::setLigado(int l)
{
	switch(l)
	{
		case 1:ligado=true;break;
		case 0:ligado=false;break;
	}
}

Veiculo::Veiculo(int tp)
{
	tipo=tp;
	switch(tipo)
	{
		case 1:nome="Carro";setVelMax(200);break;
		case 2:nome="Avião";setVelMax(800);break;
		case 3:nome="Barco";setVelMax(150);break;
		}	
}

int Veiculo::getVelMax()
{
		return velmax;	
}

void Veiculo::setVelMax(int vm)
{
	velmax=vm;
}




#endif
