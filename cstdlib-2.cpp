#include <iostream>
#include <cstdlib>//system todas os outros metodos

using namespace std;

void fim()
{

    cout<<"O bom astral vai dominar o mundo!!!"<<endl;
}

int comparacao(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
main()
{
    atexit(fim);//quando o programa acabar, o atexit vai chamar a funcao fim

    int vetor[]/*desse modo fazemos com que esse vetor seja um ponteiro*/={5,3,8,2,9,7,1,3,0,7,4,8};

    qsort(vetor/*nome do vetor*/,sizeof(vetor)/4/**tamanho do vetor*/,sizeof(int)/*tamaho do tipo*/,comparacao/*fun��o que vai comparar*/);

    for(auto jm:vetor)
    {
        cout<<jm<<" - ";
    }

    int pesq=7;
    int *pos;

    pos=(int*)/*para afalar que o retorno vai ser int*/bsearch(&pesq/*elemento a ser pesquisado*/,vetor/*cole��o*/,sizeof(vetor)/4/*tamanho do vetor*/,sizeof(int)/*tamnaho do tipo*/,comparacao/*funcao que vai fazer a busca*/);
    //o bseach retorna a posicao do elemento se encontrado
    cout<<endl<<"Elemento encontrado na posi��o:"<<*pos<<endl;

    const char* p;
    const char* canal="CBF curso";
    p=getenv("PATH");//o getenv pega qualquer variavel de ambiente;

    cout<<endl<<endl<<endl<<endl<<p<<endl;


    system("dir");
    cout<<canal<<endl;
    system("pause");
    for(auto i=0;i<10;i++)
    {
        if(i<5)
        {
            cout<<i<<endl;
        }else{
        //O EXIT OU ABORT FINALIZA O PROGRAMA E N�O O BLOCO DE COMANDO NO QUAL ELE EST� INSERIDO
        exit(EXIT_SUCCESS);//Aqui o exit tem parametro, j� se usassemos o abort, nao teria parametro nenhum
        //tanto faz usar o failure ou success, a diferenca � que o su=0 e o fai=1
        cout<<i<<endl;
        }
    }

    cout<<"Fim...foi bom"<<endl;
	return 0;
}
