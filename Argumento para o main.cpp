#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char * argv[])//o primeiro guarda a quantidasdde de argumentos, e segundo armazena os argumentos
{

	cout<<argv[0]<<"\n\n";//por padr�o, a primeira posi��o do argv aponta para o nome do programa
	//podemos adicionar mais argumentos/valores no prompt de comando
	//no prompt n�s podemos adicionar mais argumentsos
	// se colocarmos um cout para o argc, n�s podemos ver no prompt a quantidade de argumentos
	if(argc>1)
	{
		if(!strcmp(argv[1],"sol"))
		{
			cout<<"Est� sol aqui";
		}else if(!strcmp(argv[1],"nublado"))
		{
			cout<<"Est� nublado";
		}else
		{
			cout<<"vou ficar em casa";
		}
	}
	return 0;
}
