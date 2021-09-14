#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;

main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    //o for com base em intervalos pode ser usado em todas as cole��es

    int x[10]{1,2,3,4,5,6,7,8,9,10};//inicializa��o uniforme

    for(auto i=0;i<sizeof(x)/4;i++)
    {
        cout<<x[i]<<endl;
    }

    cout<<endl;

    for(auto i:x)//a variavel i vai receber o valor das posi��es de x
    {
         cout<<i<<endl;

    }

    vector<double>zzz{1.3,555.4,245.2,3,4,5,6,7,66,5.234,45.8};
    cout<<endl;
    for(auto i:zzz)
    {
        cout<<i<<endl;
    }

    const char* nome="Bruno";
    //string nome{"Bruno"}, ^ � o jeito moderno de declarar uma string
    //aqui utilizamos o * para indicar que � um ponteiro, sen�o temos que utilizar nome[] pra indicar que � um vetor

    //o for com base em intervalos n�o vai funcionar com cole��es de caracteres

    //para isso, temos que utilizar o for comum

    cout<<endl;
    for(auto i=0;i<sizeof(nome)/*char/string ocupam 1 byte de memoria*/;i++)
    {

        cout<<nome[i]<<endl;
    }
	return 0;
}
