#include <iostream>
#include <bits/stdc++.h>
#define p <<endl;
#define pp <<endl
#define sp cout pp pp p

using namespace std;

main()
{

    //replace_if - substitui um elemento se ele retornar true no teste
    vector<int>v1{1,45,3,6,8,6,3,32,2,9,5,7,43,693};
    replace_if(v1.begin(),v1.end(),[](int i){return i<50;},10);//se o elementyo for menor que 50, substitua-o por 10
        for(auto x:v1)
        {
            cout<<x<<" ";
        }

        sp

        vector<int>v2(10);
        fill(v2.begin(),v2.end(),10);//vai preencher com o elemento 10
        for(auto x:v2)
        {
            cout<<x<<" ";
        }

        //remove - remove um valor indicado da coleção
        vector<int>v3{6,3,1,9,3,7,3,1,2,6,0,7,3,9,8};
        int qtd=count(v3.begin(),v3.end(),2);//conta a quantidade de elementos 2 te na coleção e armazena essa quantindade na variavel
      remove(v3.begin(),v3.end(),2);
      v3.resize(v3.size()-qtd);//tamanho atual menos a quantidae de elementos 2 para reajustar o tamanho
      v3.shrink_to_fit();//diminui, acho eu, a capacidade de acordo com o size

        sp

        //unique - remove valores duplicados consecutivos

        vector<int>v4{0,1,1,2,2,3,4,5,6,7,7,7,8,9,0};
        auto it=unique(v4.begin(),v4.end());
        v4.resize(distance(v4.begin(),it));//
            for(auto x:v4)
        {
            cout<<x<<" ";
        }

        //reverse - inverte a ordem dos elementos

        vector<int>v5{0,1,2,3,4,5,6,7,8,9};
        reverse(v5.begin(),v5.end());
        for(auto x:v5)
        {
            cout<<x<<" ";
        }

        cout pp pp p
        //sort - ordena os elementos

        vector<int>v6{7,2,9,0,1,83,2,4,6,9,1,89,2,6};
        sort(v6.begin(),v6.end());
        for(auto x:v6)
        {
            cout<<x<<" ";
        }

        cout pp pp p

        //is_sorted - verifica se a colecao esta ordenada
        vector<int>v7{7,31,5,78,9,5,2,2,5,689,6,3,1,323,46,7};
        if(is_sorted(v7.begin(),v7.end()))
        {
            cout<<"A coleção está ordenada" p
        }else{
            cout<<"A colecao não está ordenada" p
        }

        cout pp p

        //merge - mescla duas colecoes e armazena em uma terceira colecao

        vector<int>v8{78,12,4,6,9,1,4,7,9,0,3,2,043,9};
        vector<int>v9{1,8,3,1,6,0,67,3,4,9,0,67,113,7,7};
        vector<int>v10(v9.size()+ v8.size());
        merge(v8.begin(),v8.end(),v9.begin(),v9.end(),v10.begin());
        for(auto x:v10)
        {
            cout<<x<<" ";
        }

        cout pp pp p

        //set-union - une duas colecoes
        vector<int>v11{16,67,2,6,88,24,67,8,4};
        vector<int>v12{7,9,0,4,12,5,6,8,84,1,78,9,9};
        vector<int>v13(v11.size()+ v12.size());
        set_union(v11.begin(),v11.end(),v12.begin(),v12.end(),v13.begin());
        for(auto x:v13)
        {
            cout<<x<<" ";
        }

        cout pp pp p

        //set_intersection - pega os elementos que são comuns entre essas duas coleções

        vector<int>v14{0,9,8,7,6,5};
        vector<int>v15{5,7,89,3,2};
        vector<int>v16(v14.size()+ v15.size());
        set_intersection(v14.begin(),v14.end(),v15.begin(),v15.end(),v16.begin());

        for(auto x:v16)
        {
            cout<<x<<" ";
        }

        cout pp pp p
        //set_diference - retorna a diferença da primeira coleção  em relação a segunda

        vector<int>v17{0,1,2,3,4};
        vector<int>v18{2,3,4,5,6};
        vector<int>v19(v17.size()+ v18.size());
        set_union(v17.begin(),v17.end(),v18.begin(),v18.end(),v19.begin());
        for(auto x:v19)
        {
            cout<<x<<" ";
        }

        cout pp pp p

        cout<<" min e max" p

        auto n1=10,n2=5;
        cout<<"Menor:"<<min(n1,n2)<<endl;
        cout<<"Maior:"<<max(n1,n2)<<endl;

        cout pp p

        //minmax - retorna entre varios valores

        auto n3=10,n4=8,n5=9,n6=0,n7=19,n8=90;
        auto res=minmax({n3,n4,n5,n6,n7,n8});
        cout<<"Menor: "<<res.first<<endl <<"Maior: "<<res.second;



	return 0;
}
