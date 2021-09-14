#include <iostream>
#include <vector>
using namespace std;

main()
{

    int j1=2,j2=3,j3=3;
    //[](){};//funcão lambda declarada
    //nos [capturas das variaveis,podendo ser externas] nos (colocamos os parametros tradicionais) e nos {as instrucoes}
    auto maior=[](double n1, double n2)->double{

            return (n1>n2)?n1: n2;
    };

    cout<<maior(5,4.9999)<<endl<<endl;

    auto maior2=[=](vector<int>n)->int{//passamos como parametro um vector pois assim, podemos ter varias entradas e ser mais dinamico
    /*o =, significa que vai estar pegando todas as vairaveis do escopo1*/
        /*Forma tradicional
            int m=0;
            vector<int>::iterator it


            for(it=n.begin();it!=n.end();it++)
            {
                if(m<it)
                {
                m=it;
                }else{
                m=m;
                }

                return m;
        */
        auto m=0;
        for(auto i:n)
        {
            m=(m<i)?i:m;

        }

        return m+j1+j2+j3;
    };

    cout<<maior2({/*inicialização uniforme*/9,7,7,5,4,3,30,22,22,31})<<endl<<endl;


    vector<int>jm;
    int vl;
    inicio:

        cout<<"Entre com o valor:"<<endl;
        cin>>vl;
        jm.push_back(vl);
        if(vl>0)
        {
            goto inicio;
        }

        cout<<endl<<maior2(jm);
	return 0;
}
