#include <iostream>
#include <fstream>


using namespace std;

main()
{
	//O ARQUIVO EST� SENDO CRIADO NO DIRETORIO DO PROGRAMA
	//MODOS
	//ofstream - entrada de dados
	//ifstream - saida de dados
	//fstream - ambos os de cima
	
	ofstream arquivo;
	
	arquivo.open(/*nome do arquivo*/"c++.txt",ios::app);//cria o arquivo se n�o existir
	/*ios::app, esse modo faz com possamos adicionar mais consteudo no arquivo,sem sobresair o texto existente*/
	
	arquivo << "cbf curso melhor canal do mundo";//o operador << faz com que o texto seja escrito no arquivo
	
	arquivo.close();
	
	
	ifstream arquivo2;
	string linha;
	arquivo2.open("c++.txt");
	
	if(arquivo2.is_open())
	{
		//while enquanto o getline retornar true
		while(getline(arquivo2, linha))//usamos essa fun��o para �er os caracteres do arquivo, e o conteudo ser� na string
		cout<<linha;
		
		arquivo2.close();
	}else{
		cout<<"N�o foi possivel abrir o arquivo"<<endl;
	}
	return 0;
}
