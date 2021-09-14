#include <iostream>
#include <ctime>//para utilizar o ctime
#include <chrono>//a chrono é um subnamespace
#include <windows.h>


using namespace std;
using namespace chrono;//temos que usar esse namespacae

main()
{
    minutes m(1);//nesse caso funcionou pq estamo passando por uma unidade menor
    seconds s=m;

    cout<<s.count()/*para afzer a contagem*/<<endl;

    seconds s2(120);

    minutes m2=duration_cast<minutes>(s2);//conversão

    cout<<m2.count()<<endl;

    using chrono::system_clock;//falando que eu estou usando o relogio do sistema

    duration<int,ratio<60*60*24>> um_dia(1);/**obtendo a duracao de um dia em segundo/>>//expressa uma duração*/

    system_clock::time_point hoje=system_clock::now();//estou associando a variavel hoje o dia de hoje, ou seja, estou representendo o hoje na variavel hoje
    system_clock::time_point amanha=hoje + um_dia;//representando o amanha
    system_clock::time_point ontem= hoje - um_dia;

    time_t t{system_clock::to_time_t(hoje)};//associando a variavel do tipo time ao hoje

    cout<<"Hoje: "<<ctime(&t)<<endl;

    t=system_clock::to_time_t(amanha);//associando a variavel do tipo time ao hoje

    cout<<"Amanhã: "<<ctime(&t)<<endl;


    t=system_clock::to_time_t(ontem);//associando a variavel do tipo time ao hoje

    cout<<"Ontem: "<<ctime(&t)<<endl;

    steady_clock::time_point t1=steady_clock::now();

    for(auto i=0;i<168;i++)
    {
        for(auto j=i;j>=0;j--)
        {
            cout<<"*";
            Sleep(10);
        }

        cout<<endl;

    }

    steady_clock::time_point t2=steady_clock::now();

    duration <double> tempo= duration_cast<duration<double>>(t2-t1);

    cout<<"Tempo gasto para fazer essa merda: "<<tempo.count()<<endl;
	return 0;
}
