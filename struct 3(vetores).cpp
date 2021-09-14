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
	Carro *carros=new Carro[2];
	Carro car1, car2,car3;// criei essa variavel do tipo carro e assim, posso usar as propriedades cor, nome, petencia e vel, no nosso caso
	
	carros[0]=car1;
	carros[1]=car2;
	carros[2]=car3;
	
	carros[0].insere("Cartola","Preto",200,150);
	carros[1].insere("INXs","Vermelho",300,400);
	carros[2].insere("Theless","Azul",400,300);
	cout<<"\nddook\n";
	for(int i=0;i<=2;i++)
	{
		carros[i].mostra();
	}
	
	return 0;
}

