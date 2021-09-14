#include <iostream>
#include <C:\Users\João Marcos\Documents\João Marcos - Cotec\C++\Classes de armazenamento\Cabeçalho de variáveis.h>


using namespace std;
//Esse é o programa principal do projeto
//o arquivo Classes de Armazenamento 2.1 pode ser substituido por um arquivo de cabeçalho


int num{10};//aqui estamos criando e inicializando o num
extern double valor;
void impnum();//aqui estamos fazedno a mesma coisa com a funcao

int main()
{
    impnum();
    cout<<valor<<endl;
    cout<<temp<<endl;//podemos utilizar a variavel do cabeçalho sem declarar comp extern aqui no main

    return 0;
}
