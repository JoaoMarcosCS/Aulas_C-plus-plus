#include <iostream>
#include <vector>
using namespace std;

main()
{
	vector<int> num;//não precisamos criar com tamanha, se quisermos, colocamos no num(5)ex.
	//caso não declaremos o tamanho do vector
	// não podemos usar a sintaxe num[4]=89 ex.
	//daí só podemos adicionar com o push_back
	int tam,i;
	vector<int>num2;
	
	num.push_back(100);//no vector, só podemos usar o push back
	num.push_back(445);
	//nós podemos utilizar a sintaxe num[1]=987 pq ela já foi criada com o push back
	//mas não podemos fazer num[9] pois ainda não existe na memória RAM
	num.push_back(34);
	
	num2.push_back(133);
	num2.push_back(233);
	num2.push_back(344);

	num.swap(num2);//esse método troca os valores dos vector em questão
	
	tam=num.size();
	
	
	num.insert(num.begin(),892);//aqui tá adicionando no começo
	
	
	num.insert(num.begin()+2,835);//agora está adicionando na 2 posição
	
	
	num.erase(num.end()-1);
	
	
	cout<<endl<<"Último elemento do vector1: "<<num.back()<<endl;
	cout<<endl<<"Primeiro elemento do vector1: "<<num.front()<<endl;
	cout<<endl<<"Valor do meio do vector1: "<<num.at(1)<<endl;
	cout<<"Tamanhp do vector:"<<tam<<endl;
	
	for(i=0;i<num.size();i++)//temos que colocar < em vez de <= pois o num.size retorna uma posição a mais
	{
		cout<<num[i]<<endl;
	}
	
	cout<<endl;
	for(i=0;i<num2.size();i++)//temos que colocar < em vez de <= pois o num.size retorna uma posição a mais
	{
		cout<<num2[i]<<endl;
	}

	while(!num.empty())//enquanto o num não estiver vazio
	{
		num.pop_back();
	}
	
	//ou podemos usar o clear
	
	num2.clear();
	
	cout<<"\nTamanho de vector1: "<<num.size()<<endl<<"Tamanho do vector2: "<<num2.size()<<endl;
	return 0;	
}
