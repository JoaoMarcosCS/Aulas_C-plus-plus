#include <iostream>
#include <list>
#define pula "\n"
using namespace std;

main()
{
	list <int> aulas;
	list<int>aulas2;//a lista tamb�m pode ser declarada assim aulas(50), vai ter 50 elementos, aulas(5,50), vai ter 5 elementos com valor 50	
	int tam=10;//esse vaiser o tamanho que n�s determinamos
	list<int>::iterator it;//essa � a declara��o do intereitor, que funciona como um ponteiro

	
	aulas2.push_front(49);
	aulas2.push_front(98);
	aulas2.push_front(72);
	aulas2.push_front(33);
		for(int i=0;i<tam;i++)
	{
		aulas.push_front(i);//vai ser colocado primeiro o 0, depois o 1 e vai ficara assim 0->1,0->2,1,0->...
		
	}
	
	it=aulas.begin();//aqui n�s informamos que o interator est� no come�o da lista
	advance(it,5);//aqui n�s falamos que o iterator est� na posi��o 5 da lista
	aulas.insert(it,40);//aqui n�s falamos que na posi��o 5 da lista entra o valor 40
	advance(it,4);
	aulas.insert(it,100);
	aulas.erase(--it);
	aulas.merge(aulas2);//aulas2 fica vazia pois seu conteudp foi passado para aulas1
	cout<<"Tamanho da lista:"<<aulas.size()<<pula;
	
	aulas.sort();//m�todo que ordena a lista em ordem crescente
	aulas.reverse();//esse m�todo inverte d=toda lista
	tam=aulas.size();
	for(int i=0;i<tam;i++)
	{
		cout<<aulas.front()<<pula;
		aulas.pop_front();
	}
	
	aulas.clear();//exclui toda lista
	
	
	return 0;
}
