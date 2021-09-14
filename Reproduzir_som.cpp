#include <iostream>
#include <locale.h>
#include  <bits/stdc++.h>
#define p <<endl;
#define pp <<endl
#define sp cout pp pp p

using namespace std;

fstream arquivo;
char nome_arquivo[500];

void mudaconteudo()
{

    string new_conteudo;
    auto cont=0;

    arquivo.open(nome_arquivo,fstream::trunc);
    cout pp<<"Novo conteúdo:";
    getline(cin,new_conteudo);
    getline(cin,new_conteudo);
    char new_conteudo2[new_conteudo.size()];

    for(auto y:new_conteudo)
    {
        new_conteudo2[cont]=y;
        cont++;
    }

    cout pp<<new_conteudo2 p

    //cout pp<<new_conteudo2 p
        arquivo <<"dim sapi" p
        arquivo <<"Set sapi =CreateObject(\"sapi.spvoice\")" p
        arquivo <<"sapi.Speak \" ";
        arquivo.write(new_conteudo2,strlen(new_conteudo2)+1);
        arquivo<<"\"";
        arquivo.close();

}

main()
{
	setlocale(LC_ALL,"portuguese");


    printf("\n\nNÃO UTILIZE VÍRGULA OU QUALQUER OUTRO TIPO DE ACENTUAÇÃO, PELO MENOS NESSA VERSÃO\n\n");

    string msg;
    string conteudo;
    char opcao;

    cout<<"Nome:";
    cin>> nome_arquivo;
    //getline(cin,nome_arquivo);

    arquivo.open(nome_arquivo,fstream::in|fstream::out);

    if(arquivo.is_open())
    {

            cout<<"O Arquivo contem o seguinte conteudo: ";
            while(getline(arquivo,conteudo))
                cout<<conteudo p

                cout<<"Deseja modifica-lo?[s/n]:";
                cin>>opcao;

                switch(opcao)
                {
                case 'S':
                    case 's':arquivo.close();mudaconteudo();break;

                    case 'n':
                        case 'N':cout pp<<"Tudo bem..." p
                }

    }else{


        arquivo.open(nome_arquivo,fstream::in|fstream::out|fstream::app);
        cout<<"Entre com a mensagem a ser convertida: ";
        getline(cin,msg);
        getline(cin,msg);
        char msg2[msg.size()];
        auto cont=0;
        for(auto x:msg)
        {
            msg2[cont]=x;
            cont++;
        }
        //cout<<msg2 p
        arquivo <<"dim sapi" p
        arquivo <<"Set sapi =CreateObject(\"sapi.spvoice\")" p
        arquivo <<"sapi.Speak \" ";
        arquivo.write(msg2,strlen(msg2));
        arquivo<<"\"";
        arquivo.close();



    }


    char teste[500]="start ";


    strcat(teste,nome_arquivo);



    system((const char*)teste);

	return 0;
}
