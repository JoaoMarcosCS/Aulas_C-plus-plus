#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

struct{
    char nome[40];
}pessoa1,pessoa2;

main()
{


    char txt1[50]="João Marcos C. da Silva";
    char txt2[50];

    strcpy(txt2,txt1);//passa o conteudo do txt1 para txt2
        /*
        podemos usar tambem o memcpy(txt2,txt1, sizeof(txt1)+1), sendo o +1 o caracter terminador, pois assim, vai copiar da memoria o conteudo


    */

    cout<<txt2<<endl;

    char meunome[40]="João";

    memcpy(pessoa1.nome,meunome,strlen(meunome)+1/*strlen para retornar o tamanho da string*/);
     memcpy(pessoa2.nome,pessoa1.nome,sizeof(pessoa1.nome)+1);

    cout<<endl<<pessoa2.nome<<endl;

    strcat(txt1,txt2);//adiciona o conteudo de txt2 em txt1

    cout<<endl<<txt1<<endl;

    char nome[50]="Saida de dados a partir de prints";
    char nome2[50]="Saida de dados a prtir de couts";
    /*
    -1: 1 maior 2
    0: igauais
    1: 2 maior 1
    */

        int res=strcmp(nome,nome2);
        //      memcmp


    (res==0)?cout<<"As strings são iguais":(res>0)?cout<<"A primeira string é maior que a segunda":cout<<"A segunda string é maior que a primeira";

    cout<<endl<<endl;


	return 0;
}
