#include <iostream>
#include <queue>
#define pula "\n"
using namespace std;

main()
{
	//A fila ou queue, � diferente do stack, pois o primeiro a entra � o primeiro a sair
	
	queue <string> cartas;//Tipo do elemento:stack, valor do elemento:string, e o nome cartas
	
	//o m�todo empity verifica se a pilha est� vazia
	//se estiver, retorna 1, se estiver com alguma coisa, retorna 0
	
	(cartas.empty())?cout<<"Fila vazia\n":cout<<"Fila com conte�do";
	cartas.push("Rei de Copas");//Lembrando que esse � o primeiro valor, ou seja ele vai ser o ultimo valor
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	cartas.push("Rei de Espadas");//O push adiciona elementos no topo
	(cartas.empty())?cout<<"Fila vazia\n":cout<<"Fila com conte�do\n";
	cout<<"tamanho da fila:"<<cartas.size()<<"\n";
	cout<<"Carta que est� no come�o:"<<cartas.front()<<"\n";//O front retorna o valor que est� na frente
	cout<<"Carta que est� no final da fila:"<<cartas.back()<<pula; 
	cartas.pop();//O pop retira o elemento que est� no come�o da fila
	cout<<"Nova carta do come�o:"<<cartas.front()<<"\n";
	
	//uma estrutura para excluirmos todos os elementos da pilha �
	
	while(!cartas.empty())//faz isso enquanto tiver alguma coisa na pilha
	{
		cartas.pop();
	}
	
	(cartas.empty())?cout<<"Pilha vazia\n":cout<<"Pilha com conte�do\n";
	
	return 0;
}
