#include <iostream>
#define pula "\n"
using namespace std;

main()
{
	int *p;
	int vetor[10];
	
	p=&vetor[0];
	*p=10;
	for(int i=0;i<=sizeof(vetor)/4;i++)
	{
		cout<<p<<pula<<*p<<pula;
		p=&vetor[i];
		*p=10;
}

	p=&vetor[0];
	//podemos incrementar o ponteiro também
	*(p+=1);//incremento
	cout<<pula<<p;
	return 0;
}
