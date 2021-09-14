#include <iostream>
#include <cstdlib>
#include <ctime>//para usar o time no srand

using namespace std;

main()
{
    double n;
    char numero[80];

    cout<<"Digite um numero:"<<endl;
    cin>>numero;

    n=strtod(numero,NULL);
    //poderiamos usar o metodo atof(char);
    /*
    atof- char para float
    atoi- char/sting para inteiro
    atol- string para long
    atoll- string para long long
    O atoll é do C++ 11
    essas funcoes tambem estao no modelo strtod, strtof strtoll... e asism vai
    */

    cout<<"Numero digitado:"<<n<<endl;

    srand(time(NULL));
    for(auto i=0;i<10;i++)
    {
        cout<<rand()%50<<endl;
    }

    //-----------------------------------------------------------------------------
    //----------------------------------------------------------------------------
    //-FUNÇÕES PARA ALOCAÇÃO DINÂMICA DE MEMÓRIA

    int *vetor;//declaração de um vetor só que me ponteiros
    int tam{10},num;

    //vetor=(int*)calloc(tam,sizeof(int));
    vetor=(int*/*tipo de alocação*/)malloc(sizeof(int)/*tamanho do tipo do elemento*/);
    /*
    no calloc é preciso falar o tamanho do vetor, ou seja, a quantidade de memoria a ser reservada
    já no malloc, nós não precisamos falar a quantidade de espaço a ser reservado
    CURIOSIDADE: O malloc retorna para o primeiro elemento
    */

    for(auto i=0;i<tam;i++)
    {
        vetor[i]=rand()%100;
        for(auto j=0;j<=i;j++)
        {
            cout<<" - "<<vetor[j];
        }
        cout<<endl;
    }

    free(vetor);//libera a memoria que foi alocada para o vetor

	return 0;
}
