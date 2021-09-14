#include <iostream>

using namespace std;

main()
{
	double n1,n2,nota;
	string res;
	
	cout<<"Entre com a primeira nota:";
	cin>>n1;
	cout<<"Entre com a segunda nota:";
	cin>>n2;
	
	nota=n1+n2;
	
	(nota>=60)?cout<<"Aprovado":cout<<"Reprovado";
	//---------------Verdadeiro----------Falso
	
	//Também podemos colocar essa opção para uma variável
	
	
	res=(nota>=60)?"\nAprovado":"\nReprovado";
	cout<<res;
	
}
