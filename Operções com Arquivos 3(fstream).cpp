#include <iostream>
#include <fstream>
#include <cstdlib>//para usarmos o system("cls)
using namespace std;

main()
{
	
	char opc='s';
	fstream arquivo;
	string nome,leitura;
	
	arquivo.open("teste1.txt",ios::out);//no modo out, vai do teclado/sistema para o arquivo
	
	while((opc=='s')||(opc=='S'))
	{
		cout<<"Entre com um nome:";
		cin>>nome;
		arquivo<<nome<<"\n";
		cout<<"Digitar outro nome?[s/n]";
		cin>>opc;
		system("cls");
	}
	
	arquivo.close();
	
	arquivo.open("teste1.txt",ios::in);//para podermos ler o arquivo e nesse modo, ele apaga o conteudo já existente
	
	cout<<endl<<"Nomes digitados:"<<endl;
	
	if(arquivo.is_open())
	{
		while(getline(arquivo,leitura))
		{
			cout<<leitura<<ensl;
		}
		arquivo.close();
	}else{
		cout<<"Não conseguimos abrir o arquivo";
	}
	
	return 0;
}
