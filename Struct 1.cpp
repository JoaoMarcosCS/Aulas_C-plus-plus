#include <iostream>
#define pula "\n"
using namespace std;

struct Carro{
	
	string cor;
	string nome;
	int potencia;
	int vel;
	
};

int main()
{
	Carro car1, car2;// criei essa variavel do tipo carro e assim, posso usar as propriedades cor, nome, petencia e vel, no nosso caso
	
	car1.potencia=100;
	car1.nome="Cartola";
	car1.cor="Azul escuro";
	car1.vel=200;
	
	car2.potencia=140;
	car2.nome="JM";
	car2.cor="Preto";
	car2.vel=230;
	
	cout<<"Nome:"<<car1.nome<<pula<<"Cor:"<<car1.cor<<pula<<"Velocidade:"<<car1.vel<<pula<<"Potência:"<<car1.potencia;
	cout<<pula;
	cout<<"_________________________________________________________________________________________________________";
	cout<<pula<<pula;
	cout<<"Nome:"<<car2.nome<<pula<<"Cor:"<<car2.cor<<pula<<"Velocidade:"<<car2.vel<<pula<<"Potência:"<<car2.potencia;
	
	
	return 0;
}
