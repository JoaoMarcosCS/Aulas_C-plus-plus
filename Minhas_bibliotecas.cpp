#include<bits/stdc++.h>
#include <iostream>
#include <C:\Users\João Marcos\Documents\João Marcos - Cotec\C++\Minhas_bibliotecas.h>



using namespace std;


main()
{
    setlocale(LC_ALL,"portuguese");

    string m;
    string jm;
    int chave;
    cout<<"Entre com a mesnagme a ser criptograda: ";
    cin>>m;
    cout pp <<"Entre com a chave:";
    cin>>chave;
    jm=C_cesar(m,chave);//a variavel que receber o valor de cesar deve ser uma string
    //retorna uma string e recebe como parametro tembém uma string

    cout pp<<"Conteúdo criptografado: "<<jm;
    jm=D_cesar(jm,chave);
    cout pp <<"Mensagem original: "<<jm;

    linha

    cout<<"----------------------------Criptografia de Rota --------------------" p

    cout<<"Entre com a mensagem a ser criptografada:";
    cin>>m
    cout pp <<"Entre com a chave:";
    cin>>chave;

    C_tp_simples(m,jm);




	return 0;
}
