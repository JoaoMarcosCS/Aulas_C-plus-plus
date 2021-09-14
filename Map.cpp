#include <iostream>
#include <map>

using namespace std;

main()
{
    map<int,string>prod;
    map<int,string>::iterator itmap;
    prod[0]="Mouse";//o primeiro tipo na declaração vai ser o tipo da chave, e o segundo, vai ser o tipo de conteudo
    prod[1]="Chave";
    prod[2]="Computador";
    prod[3/*chave*/]="Celular";
    prod.erase(2);//aqui ele não via estar apagando a posicao 2, e sim a chave que tem valor 2
    prod.insert(pair<int,string>(4/*chave*/,"Caderno"));
    //prod.clear();//apaga todo o map



    itmap=prod.find(3);

    if(itmap==prod.end())//significa que percorreu todo o map e não encontrou
    {
        cout<<"Produto não encontrado seu trouxa!! ";
    }else{
        cout<<"Código: "<<itmap->first<<"Prod: "<<itmap->second<<endl;
        }



    //impressão tradicional

    for(auto i=0;i<prod.size();i++)
    {

        cout<<endl<<prod[i];
    }

    //impressão com iterator

    for(auto it=prod.begin();it!=prod.end();it++)
    {

        cout<<endl<<it->first/*mostrando a chave*/<<" - "<<it->second;
    }


    prod.erase(prod.begin(),prod.find(3));//esse erase vai apagar tudo até uma posição antes da 3
    //se quiser excluir do 1 até 5, usamos o find no lugar do begin

	return 0;
}
