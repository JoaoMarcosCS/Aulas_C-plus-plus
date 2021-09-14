#include <iostream>
#define pula "\n"
using namespace std;

struct Carro{
	
	string cor;
	string nome;
	int potencia;
	int vel,velatual;
	
	void insere(string stnome, string stcor, int stpotencia, int stvel)
	{
		nome=stnome;
		cor=stcor;
		vel=stvel;
		potencia=stpotencia;
	}
	
	void mostra()
	{
		
	cout<<pula<<"Nome:"<<nome<<pula<<"Cor:"<<cor<<pula<<"Velocidade:"<<vel<<pula<<"Potência:"<<potencia;//aqui não precisa colocar
	//car1.nome porque já ta na struct
	cout<<pula;
	cout<<"_________________________________________________________________________________________________________";
	}
	
	void mudavel(int mv)
	{
		velatual=mv;
		if(velatual>vel)
		{
			velatual=vel;
		}
		else if(velatual<=0) {
			vel=0;
		}
	}
};

int main()
{
	Carro car1, car2;// criei essa variavel do tipo carro e assim, posso usar as propriedades cor, nome, petencia e vel, no nosso caso
	
	/*car1.potencia=100;
	car1.nome="Cartola";
	car1.cor="Azul escuro";
	car1.vel=200;-*/
	
	car1.insere("Cartola","Preto",450,400);
	car2.insere("Salvador","Azul escuro",450,600);
	car1.mostra();
	car2.mostra();
	car1.mudavel(0);
	car1.mostra();
	
	
	return 0;
}
