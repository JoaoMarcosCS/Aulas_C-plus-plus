#include <iostream>
#include <fstream>
#include <string>
#define p <<endl;
#define pp <<endl
#define sp cout pp pp p

using namespace std;

main()
{
    fstream arquivo;
    string linha;
    char linha_b[255];


    arquivo.open("cbfcursos.dat",fstream::in|fstream::out|fstream::app/*esses são os flags*/);
    //caso o arquivo, ao ser aberto não exista, com o app ele cria automaticamente
    //in - input, leitura
    //out - output, escrita
    //binary - modo binário(não sei o que é isso)
    //ate - abre para escrita e posiciona no final
    //app - append, abre para escrita sem deletar o conteudo atual, posiciona no final
    //trunc - truncate, abre para escrita e remove o conteydo atual antes de abrir

    if(arquivo.is_open()){//verifica se o arquivo esta aberto
        arquivo<<"Curso de C++"  <<"Biblioteca fstream" p
    }else{
        cout<<"Arquivo inexistente" p
    }

    arquivo.close();

    sp

    //////////////////////////////////////////////////

    /*
    arquivo.open("cbfcursos.dat",fstream::in);
    if(arquivo.is_open()){
        while(getline(arquivo,linha))
        cout<<linha p

    }else{
        cout<<"Arquivo não existente" p
    }

    */

    /*

    //write - escreve no arquivo

    arquivo.open("cbfcursos.dat",fstream::out|fstream::app);
    if(arquivo.is_open())
    {
    arquivo.write("aqui poderia ser uma variavel",30);

    }else{
        cout<<"Arquivo não encontrado" p
    }

    arquivo.close();

    arquivo.open("cbfcursos.dat",fstream::in);
    while(getline(arquivo,linha))
        cout<<linha  p

    */

    /*

        //read - lê o arquivo

        arquivo.open("cbfcursos.dat",fstream::in|fstream::app);
        arquivo.read(linha_b,255);//o conteudo vai ser armazendo na variavel
        cout<<linha_b p
        arquivo.close();

    */

    /*
    //tellp - retorna a posição do ponteiro dentro do stream
    //seekp - define a posição dentro da stream
    //beg - coloca ponteiro na frente como vetor.begin()
    //end - coloca o ponteiro atrás do vetor vetor.end()
    */



	return 0;
}
