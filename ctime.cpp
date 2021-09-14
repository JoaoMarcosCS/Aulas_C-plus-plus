#include <iostream>
#include <ctime>//evolucao de time.h
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int numero_primos(int n)//retorna a quantidade de numeros primos em um intervalo n
{

    int j,i;
    int freq=n-1;

    for(i=2;i<=n;i++)
    {
        for(j=sqrt(i);j>1;j--)
        {
            if(i%j==0)
            {
                freq--;
                break;
            }
        }
    }

    return freq;
}

main()
{
    int primos;

    clock_t t,t1,t2,t3;//declarando o tipo prorpio para receber valores do tipo clock

    t=clock();//comecando a contar o tempo
    t1=clock();
    primos=numero_primos(999000);
    t=clock()-t;
    t2=clock();
    t3=difftime(t2,t1);//o maior vem primeiro

    cout<<"Numeros primos: "<<primos<<endl;
    cout<<"Tempo gasto: "<< ((float)t)/*conversão/typcast*//CLOCKS_PER_SEC<<"segundos"<<endl;
    cout<<"Tempo gasto segundo difftime: "<<((float)t3)/CLOCKS_PER_SEC<<" segundos"<<endl;

    time_t t4;
    struct tm * infoT;//essa struc já implementada automaticamente
        time(&t4);//aqui nós associamos a variavel t ao tempo decorrido desde 1970

        infoT=localtime(&t4);//faz a conversão de t para a struct tm

        cout<<"Tempo percorrido desde 1 de Janeiro de 1970: "<<t4<<" segundos"<<" ou "<</*os asctime é da struct tm*/asctime(infoT)/*converte para string*/<<endl;

        /*

        tm_sec- retorna secundo
        tm_min- retorna os minutos
        tm_hour- retorna as horas
        tm_wday- retorna o dia da semana
        tm_mday- retorna o dia do mes
        tm_mon- retorna do mes
        tm_year- retorna o ano desde 1900
        tm_yday- retorna o dia do ano

        */

        cout<<"segundo:"<<infoT->/*é seta pq é um ponteiro*/tm_sec<<endl;

        cout<<"Dia de hoje usando o ctime: "<<ctime(&t4)<<endl;
        printf("\nDia de hoje usando o ctime: %s\n",ctime(&t4));

        char buffer[80];
        //metodo para fazer a formatacao do tempo
        strftime(buffer,80,"Hora: %I:%M:S",infoT);
        cout<<"Formatação de tempo: "<<buffer<<endl;



	return 0;
}
