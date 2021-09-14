#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char * argv[])//o primeiro guarda a quantidasdde de argumentos, e segundo armazena os argumentos
{

	cout<<argv[0]<<"\n\n";//por padrão, a primeira posição do argv aponta para o nome do programa
	//podemos adicionar mais argumentos/valores no prompt de comando
	//no prompt nós podemos adicionar mais argumentsos
	// se colocarmos um cout para o argc, nós podemos ver no prompt a quantidade de argumentos
	if(argc>1)
	{
		if(!strcmp(argv[1],"sol"))
		{
			cout<<"Está sol aqui";
		}else if(!strcmp(argv[1],"nublado"))
		{
			cout<<"Está nublado";
		}else
		{
			cout<<"vou ficar em casa";
		}
	}
	return 0;
}
