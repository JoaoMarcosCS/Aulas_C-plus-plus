#include <algorithm>//é utilizada para usar com coleções
#include <vector>
#include <iostream>
#define p <<endl;
#define pp <<endl

using namespace std;

main()
{
      vector<int>vt{33,22,565,789,12,-3,-56,-18,90,67};

      for(auto x:vt)
      {
          cout<<x<<" ";
      }

      cout pp pp p

      //all_of - Retorna true se todos os elementos corresponderem ao teste, ou seja,
      //se um elemento retornar false, o retorno de todos já serão false
      //REsumindo- true se todos elementos retronarem true
      if(all_of(vt.begin(),vt.end(),[](int i){return i<50;}))//se tiver um elemento maior que 50, o retorno para o if já vai ser false
      {
          cout<<"Todos os elementos são menores que 50." p
      }else{
        cout<<"Existe um ou mais elementos maiores que 50." p
      }

      //any_of - Retorna true se pelo menos um elemento retornar true
      if(any_of(vt.begin(),vt.end(),[](int i){return i<12;}))
        {
            cout<<"Existe um ou mais elementos maiores que 12" p
        }else{
            cout<<"Todos os elementos são amiores ou iguais a 12" p
        }

        //none_of - retorna false se o teste retornar false para pelo menos com um dos elementos
        if(none_of(vt.begin(),vt.end(),[](int i){return i<0;}))
            {
                cout<<"Todos os elementos são positivos" p
            }else{
                cout<<"Existe um ou mais elementos negativos" p
            }


            //for_each - aplica uma funcão a todos os elementos da coleção
            cout<<"Todos os elementos dobrados:"p
            for_each(vt.begin(),vt.end(),[](int i){

                     cout<< i*2 <<" ";
                     });

                     cout pp pp p


            //procura um numero e retorna em um iterator
            auto it=find(vt.begin(),vt.end(),-56);
            {
                cout<<*it pp p
            }

            //retorna a um itarator o primeiro elemento que satisfaça o teste
            auto it2=find_if(vt.begin(),vt.end(),[](int i){return ((i%2)==1);});
            cout<<"Primeiro elemento impar: "<< *it2 pp p


            //retorna a um iterator o primeiro elemento que não satisfaça o teste
            auto it3=find_if_not(vt.begin(),vt.end(),[](int i){return ((i%2)==1);});
            cout<<"Primeiro elemento par: "<< *it3 pp p

               //retorna a quantidade de elementos e se nao encontrar, reotrna 0
               cout<<"Quantidade de elementos 7: "<< count(vt.begin(),vt.end(),7) pp p

            //retorna a quantidade de elementos que satisfaçam o teste
            cout<<"Qauntidade de numeros pares: "<<count_if(vt.begin(),vt.end(),[](int i){return ((i%2)==0);}) pp p



	return 0;
}
