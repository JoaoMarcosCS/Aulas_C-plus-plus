#include <iostream>
#include <windows.h>
#include <stack>//biblioteca para usarmos para trabalharmos com plihas/stack
using namespace std;
main()
{
	
	system("color 02");
	//pilhas s�o uma estruturas de armazenamneto, sendo que o primeiro dado a entrar � o ultimo a sair
	stack <string> cartas;//Tipo do elemento:stack, valor do elemento:string, e o nome cartas
	
	//o m�todo empity verifica se a pilha est� vazia
	//se estiver, retorna 1, se estiver com alguma coisa, retorna 0
	
	(cartas.empty())?cout<<"Pilha vazia\n":cout<<"Pilha com conte�do";
	cartas.push("Rei de Copas");//Lembrando que esse � o primeiro valor, ou seja ele vai ser o ultimo valor
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	cartas.push("Rei de Espadas");//O push adiciona elementos no topo
	(cartas.empty())?cout<<"Pilha vazia\n":cout<<"Pilha com conte�do\n";
	cout<<"tamanho da pilha:"<<cartas.size()<<"\n";
	cout<<"Carta do topo:"<<cartas.top()<<"\n";
	cartas.pop();//O pop retira o elemento que est� no topo!
	cout<<"Nova carta do topo:"<<cartas.top()<<"\n";
	
	//uma estrutura para excluirmos todos os elementos da pilha �
	
	while(!cartas.empty())//faz isso enquanto tiver alguma coisa na pilha
	{
		cartas.pop();
	}
	
	(cartas.empty())?cout<<"Pilha vazia\n":cout<<"Pilha com conte�do\n";
	return 0;
}
