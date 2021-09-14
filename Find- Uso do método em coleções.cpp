#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>
#include <string>

using namespace std;

main()
{

    //SIZE- VECTOR, STRING E OUTRAS COLEÇÕES/ SIZEOF- VETORES
    int vetor[]={1,2,3,4,5,6,7,8,8,9};
    int *p;

    size_t tam=sizeof vetor;

    p=find(vetor,vetor+tam,8);//inicio do vetor, final do vetor, e o elemento

    if(p!=vetor+tam)//se p for menor que o tamanho totaal do vetor
    {
        cout<<"Numeral encontrado:"<<*p/*conteudo de p*/<<endl;
    }else{

    cout<<"Numeral não encontrado"<<endl;
    }


    vector<double>num{5.5,3.4,2.9,53.78,245.9,12.4};
    auto it=find(num.begin(),num.end(),12.4);//criando o iterator que já vai receber o valor do fin
    if(it!=num.end())
       {

        cout<<"Numeral encontrado:"<<*it/*conteudo de it*/<<endl;
    }else{

    cout<<"Numeral não encontrado"<<endl;
    }


    vector<double>numeros;
    vector<double>::iterator it2;
    int qtd{10};
    double nume;

    while(qtd>0)
    {
        cout<<"Digite um numero:";
        cin>>nume;
        it2=find(numeros.begin(),numeros.end(),nume);
        if(it2!=numeros.end())
       {

        cout<<"Numeral já existente no vector"<<endl;
    }else{

        numeros.push_back(nume);
        qtd-=1;


    }
    }

        map<char,int>mapa;
        mapa['a']=100;
        mapa['b']=300;
        mapa['c']=20;
        mapa['d']=90;
        mapa['e']=1300;

        auto it3=mapa.find('c');
        if(it3!=mapa.end())
        {
            cout<<"Chave encontrada:"<<it3->second<<endl;
        }else{

        cout<<"Chave não encontrada"<<endl;
        }


        string texto="Cbf curso e o melhor canal";
        size_t enc=texto.find("curso");

        if(enc!=string::npos)//se enc tiver o mesmo tamanho da string
        {
            cout<<"Palavra encontrada:"<<enc<<endl;
        }else{

        cout<<"Palavra nã encontraada"<<endl;
        }
	return 0;
}
