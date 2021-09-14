#include <iostream>

using namespace std;

int contador(int total, int inicio)
{
	if(inicio>total){
		return 1;
	}else{
		cout<<"\n"<<inicio;
		contador(total,inicio+1);
	}
}

int fibonacci(int j)
{
	if(j==1 or j==2)
	{
		return 1;
	}else{
		return fibonacci(j-1)+fibonacci(j-2);
	}
}
int fatorial(int n1)
{
	if(n1==0)
	{
		return 1;
	}else{
		
		return n1*fatorial(n1-1);
	}
}

int main()
{
	int ntotal,ninicial;
	cout<<"Entre com a quantidade de numeros a serem gerados:";
	cin>>ntotal;
	cout<<"\nEntre com o numero inicial:";
	cin>>ninicial;
	
	contador(ntotal,ninicial);
	int fat;
	cout<<"\nEntre com o valor a ser fatorado:";
	
	cin>>fat;
	
	
		cout<<"Fatorial:"<<fatorial(fat);
		
		int fibo;
		cout<<"\nEntre com um número para gerarmos a sequência de Fibonacci:";
		cin>>fibo;
		for(int i=0;i<fibo;i++)
		{
			cout<<fibonacci(i+1)<<"-";
		
	}
	
	
}



