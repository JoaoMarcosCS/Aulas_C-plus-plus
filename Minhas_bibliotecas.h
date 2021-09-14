#ifndef MINHAS_BIBLIOTECAS_H_INCLUDED
#define MINHAS_BIBLIOTECAS_H_INCLUDED
#include <string>
#include <bits/stdc++.h>

#define p <<endl;
#define pause system("pause");
#define pp <<endl
#define linha cout pp<<"----------------------------------------------------------------------------------------------";
#define sp cout pp pp

using namespace std;

string C_tp_simples(string conteudo, string chave)
{
    char alfa[81][81];
    for(auto i=0;i<81;i++)
    {
  	for(auto j=0;j<81;j++)
  	    alfa[i][j]=' ' ;
    }

    cout<<"Continua...";
    linha
    cout<<"Um dia...";

}

string D_cesar(string conteudo,int chave)
{
    char alfabeto[54];
    int c;
    char mensagem_descriptografado[conteudo.size()];
    auto cont=0,letra=65;
    while(cont<52)
    {
        if(letra==91)
        {
            letra=97;
        }
    alfabeto[cont]=letra;
    letra++;
    cont++;
    }

    for(auto i=0;i<conteudo.size();i++)
	{
	        for(auto t=0;t<=53;t++)
	        {
                      	if(conteudo[i]==alfabeto[t])
		    			 {
		         			c=t-chave;
		         			if(c>=0)
								mensagem_descriptografado[i]=alfabeto[c];
		         			else
								c=c+53;
								mensagem_descriptografado[i]=alfabeto[c];
		     			}
	         }
	}

	return (string)mensagem_descriptografado;
}

string C_cesar(string conteudo, int chave)
{
    char alfabeto[54];
    int c;
    char mensagem_criptografado[conteudo.size()];
    auto cont=0,letra=65;
    while(cont<52)
    {
        if(letra==91)
        {
            letra=97;
        }
    alfabeto[cont]=letra;
    letra++;
    cont++;
    }
    for(auto x=0;x<conteudo.size();x++)
        {

            for(auto y=0;y<52;y++)
            {
                if(conteudo[x]==alfabeto[y])
                {
                    c=chave+y;
                    (c<=51)?mensagem_criptografado[x]=alfabeto[c] : c=c-53; mensagem_criptografado[x]=alfabeto[c];

                }
            }

        }
        return (string)mensagem_criptografado;//type cast pois a função é do tipo string pois o mensagem_criptografado é do tipo char
}


#endif // MINHAS_BIBLIOTECAS_H_INCLUDED
