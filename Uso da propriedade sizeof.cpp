#include <iostream>

using namespace std;

main()
{
	int vetor[5];//uma posição do pvetor ocupa 4 bytes
	// a funcção sizeof retorna a quantidade de bytes que o vetor ocupa
	//então precisamos dividi-lo por 4 para termos a posição total
	// que nesse case vai ser 20/4
	
	for(int i=0;i<sizeof(vetor)/4;i++)
	{
		vetor[i]=i+1;
		cout<<vetor[i]<<"\n";
	}
	
}
