#include <iostream>
#include <windows.h>

using namespace std;

void tipotrans(string transporte[4]);
void soma(double n1, double n2);
void texto();
int soma2(double n1,double n2);
main ()
{
	string transporte[4]={"carro","moto","bicicleta","avião"};
	double numero1, numero2;
	system("color 0A");//2-verde A-verde claro
	cout<<"Entre com um numero:";
	cin>>numero1;
	cout<<"\nEntre com outro numero:";
	cin>>numero2;
	soma(numero1,numero2);
	texto();
	double res2;
	res2=soma2(numero1,numero2);
	cout<<"\n"<<res2;
	
	tipotrans(transporte);
	
}
void tipotrans(string transporte[4])
{
	for(int i=0;i<4;i++)
	{
		cout<<transporte[i]<<"\n";
	}
}
void soma(double n1,double n2)
{
	double res=n1+n2;
	cout<<"\nResultado da soma:"<<res;
	
}

void texto()
{
	cout<<"\nEu ainda tenho muito o que aprender";
}

int soma2(double n1,double n2)
{
	return n1+n2;//uma função do tipo int, retorna algum valor que pode ser utilizado, como o método acima
}
