#include <iostream>
#include <stdio.h>
#include <stdlib.h>//para o malloc

using namespace std;

main()
{
	
	//char nome[90];para fazermos a aloca��o dinamica, n�s precismoa utilizar um oponteiro , que no nosso caso, do tipo char
	char *nome;
	nome=(char *) malloc(sizeof(char)+1/*1 espa�o a mais s� por garantia*/);//aqui no malloc, n�s indicamos o tamanho da variavel que vamos utilizar
		//aqui (char *), precisamos indicar que o retorno � para um ponteiro do tipo char
	
	gets(nome);//para pegar o espa�o em branco quando tivermos uma string do tipo char
	
	cout<<nome;
	
	//agora, na mem�ria RAM, estamos utilizando somente as posicoes que foram utiliazadas, em vez de utilizar as 90 posicoes
	//declaradas l� em cima
	return 0;
}
