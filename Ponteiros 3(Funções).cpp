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
	//colocando o endere�o da vari�vel, n�s podemos mudar seu conte�do a partir de seu endere�o
	// usando ponteiros
	//poderiamos fazer isso usando uma fun��o do tipo int ou declarando a vari�vel como global
	float num=0;
	float vetor[5];
	somar(&num,15);
	cout<<num<<pula;
	mudavet(vetor);//quando � vetor n�o precisamos mostrar o endere�o
	
	for(int i=0;i<=sizeof(vetor)/4;i++){
		cout<<pula<<vetor[i]<<pula;
	}
	
	
}
