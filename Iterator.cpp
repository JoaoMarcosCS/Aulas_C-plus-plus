#include <vector>
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

main()
{
	vector<string>produtos;
	produtos.push_back("mouse");
	produtos.push_back("garrafa");
	produtos.push_back("chupeta");
	produtos.push_back("processador");
	produtos.push_back("celular");
	vector<string>::iterator it;//declaracao do iterator do tipo vector string


	it=produtos.begin();//vai pegar o começo;
	cout<<*it<<endl;//temos que mostrar como ponteiro

	it=produtos.end()-1;//temos que colocar menos pois vai retornar a quantidade de elementos
	cout<<*it<<endl;

	it=produtos.begin();

	advance(it,3);//mostra o conteudo na posicao 3

	cout<<*it<<endl;

    cout<<next(it,4)<<endl;//next vai para direita-esquerda

	cout<<prev(it,2)<<endl;//prev vai da esquerda para direita

	//coloquei como comentário pq não encontrei o diretorio desses metodos

	for(it=produtos.begin();it!=produtos.end();it++)
	{
		cout<<*it<<endl;
	}


	return 0;
}
