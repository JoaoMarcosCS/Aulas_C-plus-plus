#include <iostream>
#define pula "\n"

using namespace std;

main()
{
	string nome="J�o";
	string *pn;
	pn=&nome;//Aqui t� recebendo o endere�o da vari�vel
	cout<<"Enre�o na mem�ria RAM:"<<pn<<pula<<"Endere�o:"<<&nome;
	//como o pv est� apontando para a variavel nome, podemos mudar o seu valor
	*pn="Marcos";
	cout<<pula<<nome<<pula<<*pn<<pula;
	
	return 0;
}
