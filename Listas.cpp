#include <iostream>
#include <list>
#define pula "\n"
using namespace std;

main()
{
	list <int> aulas;
	list<int>aulas2;//a lista também pode ser declarada assim aulas(50), vai ter 50 elementos, aulas(5,50), vai ter 5 elementos com valor 50	
	int tam=10;//esse vaiser o tamanho que nós determinamos
	list<int>::iterator it;//essa é a declaração do intereitor, que funciona como um ponteiro

	
	aulas2.push_front(49);
	aulas2.push_front(98);
	aulas2.push_front(72);
	aulas2.push_front(33);
		for(int i=0;i<tam;i++)
	{
		aulas.push_front(i);//vai ser colocado primeiro o 0, depois o 1 e vai ficara assim 0->1,0->2,1,0->...
		
	}
	
	it=aulas.begin();//aqui nós informamos que o interator está no começo da lista
	advance(it,5);//aqui nós falamos que o iterator está na posição 5 da lista
	aulas.insert(it,40);//aqui nós falamos que na posição 5 da lista entra o valor 40
	advance(it,4);
	aulas.insert(it,100);
	aulas.erase(--it);
	aulas.merge(aulas2);//aulas2 fica vazia pois seu conteudp foi passado para aulas1
	cout<<"Tamanho da lista:"<<aulas.size()<<pula;
	
	aulas.sort();//método que ordena a lista em ordem crescente
	aulas.reverse();//esse método inverte d=toda lista
	tam=aulas.size();
	for(int i=0;i<tam;i++)
	{
		cout<<aulas.front()<<pula;
		aulas.pop_front();
	}
	
	aulas.clear();//exclui toda lista
	
	
	return 0;
}
