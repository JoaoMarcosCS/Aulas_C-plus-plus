#include <iostream>
#define pula "\n"

using namespace std;

main()
{
	string nome="Jão";
	string *pn;
	pn=&nome;//Aqui tá recebendo o endereço da variável
	cout<<"Enreço na memória RAM:"<<pn<<pula<<"Endereço:"<<&nome;
	//como o pv está apontando para a variavel nome, podemos mudar o seu valor
	*pn="Marcos";
	cout<<pula<<nome<<pula<<*pn<<pula;
	
	return 0;
}
