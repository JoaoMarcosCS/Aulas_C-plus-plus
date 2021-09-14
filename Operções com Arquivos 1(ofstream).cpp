#include <iostream>
#include <fstream>


using namespace std;

main()
{
	//O ARQUIVO ESTÁ SENDO CRIADO NO DIRETORIO DO PROGRAMA
	//MODOS
	//ofstream - entrada de dados
	//ifstream - saida de dados
	//fstream - ambos os de cima
	
	ofstream arquivo;
	
	arquivo.open(/*nome do arquivo*/"c++",ios::app);
	/*ios::app, esse modo faz com possamos adicionar mais consteudo no arquivo,sem sobresair o texto existente*/
	
	arquivo << "cbf curso melhor canal do mundo";//o operador << faz com que o texto seja escrito no arquivo
	
	arquivo.close();
	return 0;
}
