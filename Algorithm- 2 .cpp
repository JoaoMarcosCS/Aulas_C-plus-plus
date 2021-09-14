#include <iostream>
#include <algorithm>
#include <vector>
#define p <<endl;
#define pp <<endl

using namespace std;

main()
{
    vector<int>v1{1,2,3,4,5,6,7,8,9,0};
    vector<int>v2{1,2,3,4,5,6,7,8,9,0};
    vector<int>v3{1,65,2,7,2,9,0,5,1,6,8};
    vector<int>v4{4,5,6};
    vector<int>v5{66,77,12};

    //equal - verifica se duas colecoes possuem os mesmos valores, ou seja, se são iguais,sendo que os elementos tem que estarem na mesma ordem

    (equal(v1.begin(),v1.end(),v2.begin())) ? cout<<"Coleções iguais " pp : cout<<"Coleções diferentes" p

    cout pp pp p

    //search - pesquisa se uma coleção está na outra

    auto it=search(v1.begin(),v1.end(),v4.begin(),v4.end());//procura v4 em v1
    (it!=v1.end())? cout<<"Coleção encontrada na posição :"<<*it pp : cout<<"Coleção não encontrada "p

    cout pp pp p

    //copy - copia os elementos de uma coleção para outra, mas não cria novas posições
    copy(v5.begin(),v5.end(),v3.begin());//copia os valores de v5 para v3
    for(auto x:v3)
    {
        cout<< x << " " ;
    }

    cout pp pp p

    copy_if(v5.begin(),v5.end(),v2.begin(),[](int i){return ((i%2)==0); });
    for(auto x:v2)
    {
        cout<< x << " " ;
    }

    //move - move os elementos de uma coleção para outra
    v4=move(v5);//v5 fica vazio
    cout pp pp p
    for(auto x:v4)
    {
        cout<< x << " " ;
    }

    swap(v2,v1);//troca os elementos das coleções entre elas

    cout pp pp p
    // transfor - transforma os elementos de uma colecao

    transform(v1.begin(),v1.end(),v1.begin(),[](int i){return i*100;});
    for(auto x:v1)
    {
        cout<< x << " " ;
    }

    cout pp pp p

    replace(v2.begin(),v2.end(),5,500);//substitui todos os elementos 5 por 500
    for(auto x:v2)
    {
        cout<< x << " " ;
    }

	return 0;
}
