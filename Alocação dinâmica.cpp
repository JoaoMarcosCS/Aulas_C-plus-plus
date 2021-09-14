#include <iostream>
#include <stdio.h>
#include <stdlib.h>//para o malloc

using namespace std;

main()
{
	
	//char nome[90];para fazermos a alocação dinamica, nós precismoa utilizar um oponteiro , que no nosso caso, do tipo char
	char *nome;
	nome=(char *) malloc(sizeof(char)+1/*1 espaço a mais só por garantia*/);//aqui no malloc, nós indicamos o tamanho da variavel que vamos utilizar
		//aqui (char *), precisamos indicar que o retorno é para um ponteiro do tipo char
	
	gets(nome);//para pegar o espaço em branco quando tivermos uma string do tipo char
	
	cout<<nome;
	
	//agora, na memória RAM, estamos utilizando somente as posicoes que foram utiliazadas, em vez de utilizar as 90 posicoes
	//declaradas lá em cima
	return 0;
}
