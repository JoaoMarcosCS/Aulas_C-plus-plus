#include <cstdlib>// ou poderi�mos usar a stdlib.h tamb�m para usarmos o system("cls")
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

main()
{
	setlocale(LC_ALL,"Portuguese");
	double n1,n2,n3,res;
	string opcao;
	
	comeco:
	system("cls");	
	cout<<"Entre com a primeira nota:";
	cin>>n1;
	cout<<"Entre com a segunda nota:";
	cin>>n2;
	cout<<"Entre com a terceira nota:";
	cin>>n3;
	
	res=(n3+n2+n1)/3;
	
	if(res>=60)
	{
		cout<<"Aprovado!\n";
	}else if(res<60 and res>30)
	{
		cout<<"Aluno de recupera��o\n";
	}else{
		cout<<"Aluno reprovado!\n";
	}
	
	cout<<"Voc� deseja digitar outras notas?(Sim ou n�o):";
	cin>>opcao;
	
	if(opcao=="sim" or opcao=="Sim" || opcao=="s" || opcao=="S")
	{
		goto comeco;
	}else if(opcao=="n�o" or opcao=="N�o" || opcao=="n" || opcao=="N")
	{
		return 0;
	}
	
		
	
}
