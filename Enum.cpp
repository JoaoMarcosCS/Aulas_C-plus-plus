#include <iostream>

using namespace std;

int main()
{
	enum armas{fuzil=30,escopeta=3, pistola=12,bazuca=1};
	//enum é um estrutura sequnecial
	//por padrão, oprimeiro welemnto começa em 0, a partir daí, vai aumentando de 1 em 1 
	//se colocarmos o fuzil como 100, a escopeta vai ter como valor 101
	armas armaS;//aqui eu estou criando uma variavel do tipo arma
	//armaS pode ter como valores fuzil, escopet pistola ou bazuca no nosso caso
	armaS=fuzil;//armaS vai ter o valor do fuzil
	cout<<armaS;
		return 0;
}
