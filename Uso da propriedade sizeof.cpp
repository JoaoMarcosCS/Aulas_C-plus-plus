#include <iostream>

using namespace std;

main()
{
	int vetor[5];//uma posi��o do pvetor ocupa 4 bytes
	// a func��o sizeof retorna a quantidade de bytes que o vetor ocupa
	//ent�o precisamos dividi-lo por 4 para termos a posi��o total
	// que nesse case vai ser 20/4
	
	for(int i=0;i<sizeof(vetor)/4;i++)
	{
		vetor[i]=i+1;
		cout<<vetor[i]<<"\n";
	}
	
}
