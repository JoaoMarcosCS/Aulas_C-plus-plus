#include <iostream>
#include <array>
#define p <<endl;

using namespace std;

main()
{

    array<int,10/*qnt de elementos*/>vt={1,2,3,4,5,6,7,8,9,10};

    for(auto x:vt)
        cout<<x p


    for(auto it=vt.begin();it!=vt.end();it++)
        cout<<*it p

         for(auto it=vt.rbegin();it!=vt.rend();it++)
        cout<<*it p


        cout<<"Tamanho do array: "<<vt.size() p
        cout<<"Tamanho máximo que um array pode ter : "<<vt.max_size() p

        if(vt.empty())
        {
            cout<<"O array está vazio" p
        }else{
            cout<<" o array está com conteudo!" p
        }

        cout<<vt.back()<<" - "<<vt.front() p

        array<int,10>cbf;

        cbf.fill(0);

            cout<<"Array com fill: " p
        for(auto x:cbf)
        {
            cout<<x p
        }

        vt.swap(cbf);

        for(auto x:vt)
        {
            cout<<x p
        }

        for(auto x:cbf)
        {
            cout<<x p
        }



	return 0;
}
