#include <iostream>
#define pula "\n"

using namespace std;

void somar(float *end_var, float valor)
{
	*end_var+=valor;
}

void mudavet(float *v)
{
	v[0]=3993;
	v[1]=2;
	v[2]=3;
	v[3]=4;
	v[4]=45;
	v[5]=5;
}
main()
{
	//colocando o endereço da variável, nós podemos mudar seu conteúdo a partir de seu endereço
	// usando ponteiros
	//poderiamos fazer isso usando uma função do tipo int ou declarando a variável como global
	float num=0;
	float vetor[5];
	somar(&num,15);
	cout<<num<<pula;
	mudavet(vetor);//quando é vetor não precisamos mostrar o endereço
	
	for(int i=0;i<=sizeof(vetor)/4;i++){
		cout<<pula<<vetor[i]<<pula;
	}
	
	
}
