#include <iostream>
#include <C:\Users\Jo�o Marcos\Documents\Jo�o Marcos - Cotec\C++\Classes de armazenamento\Cabe�alho de vari�veis.h>


using namespace std;
//Esse � o programa principal do projeto
//o arquivo Classes de Armazenamento 2.1 pode ser substituido por um arquivo de cabe�alho


int num{10};//aqui estamos criando e inicializando o num
extern double valor;
void impnum();//aqui estamos fazedno a mesma coisa com a funcao

int main()
{
    impnum();
    cout<<valor<<endl;
    cout<<temp<<endl;//podemos utilizar a variavel do cabe�alho sem declarar comp extern aqui no main

    return 0;
}
