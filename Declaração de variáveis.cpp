#include <iostream>

#define cbf cout<<"\nO canal CBF é o melhor canal do Youtube";
using namespace std;//serve para poupar código, em vez de colocar std:cout, usando
//o namespace, só colocamos o cout

main()
{
	string nome="Joao";
	bool vida=true;
	char caracter='a';
	int numero=5;
	double numero2=3.555555555;//podemos armazenar mais valores decimais aqui
	float numero3=3.55;
	
	cout <<"Digite um valor inteiro:";
	cin>>numero;
	cout<<"\n"<<numero;
	cout << "Digite um valor decimal(Ex:2,44):";
	cin>>numero2;
	cout << "Digite outro valor decimal(Ex:2,44):";
	cin>>numero3;
	cout << "Digite seu nome:";
	cin>>nome;
	cout << nome;
	cout<<"\nVocê tá vivo?(s ou n):";
	cin >> caracter;
	
	if(caracter=='s')
	{
		vida=true;
		cout<<vida << "Resposta:"<< caracter;
	}else if(caracter=='n')
	{
		vida=false;
		cout<<vida<<"Resposta:"<<caracter;
	}
	
	cbf
}
