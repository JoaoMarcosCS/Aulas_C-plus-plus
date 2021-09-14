#include <iostream>
#include <queue>
#define pula "\n"
using namespace std;

main()
{
	//A fila ou queue, é diferente do stack, pois o primeiro a entra é o primeiro a sair
	
	queue <string> cartas;//Tipo do elemento:stack, valor do elemento:string, e o nome cartas
	
	//o método empity verifica se a pilha está vazia
	//se estiver, retorna 1, se estiver com alguma coisa, retorna 0
	
	(cartas.empty())?cout<<"Fila vazia\n":cout<<"Fila com conteúdo";
	cartas.push("Rei de Copas");//Lembrando que esse é o primeiro valor, ou seja ele vai ser o ultimo valor
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	cartas.push("Rei de Espadas");//O push adiciona elementos no topo
	(cartas.empty())?cout<<"Fila vazia\n":cout<<"Fila com conteúdo\n";
	cout<<"tamanho da fila:"<<cartas.size()<<"\n";
	cout<<"Carta que está no começo:"<<cartas.front()<<"\n";//O front retorna o valor que está na frente
	cout<<"Carta que está no final da fila:"<<cartas.back()<<pula; 
	cartas.pop();//O pop retira o elemento que está no começo da fila
	cout<<"Nova carta do começo:"<<cartas.front()<<"\n";
	
	//uma estrutura para excluirmos todos os elementos da pilha é
	
	while(!cartas.empty())//faz isso enquanto tiver alguma coisa na pilha
	{
		cartas.pop();
	}
	
	(cartas.empty())?cout<<"Pilha vazia\n":cout<<"Pilha com conteúdo\n";
	
	return 0;
}
