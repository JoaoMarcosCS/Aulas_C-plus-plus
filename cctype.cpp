#include <iostream>
#include <cctype>

using namespace std;

main()
{
    /*
        FUN��ES:
        isprint- verifica se o caracter � imprimivel- caracetres n�o imprimiveis \t,\n,\0
        isdigit- verifica se � um digito numerico
        iscntrl - verifica se � um caracter de controle como \t,\n,\0
        islower - verifica se � um caracter minusculo
        ispunct - verifica se � um pontu��o como ,.-;
        isupper - verifica se � um caracter maiusculo
        isxdigit - verifica se � um caracter hexadecimal
    */

    char str[]={"Joao Marcos "};
    int i=0;


    cout<<"String:"<<str<<endl;
    while(str[i])
    {
        putchar(toupper(str[i]));

    i++;
    }

    i=0;


    cout<<endl<<"String:";
    while(str[i])
    {
        putchar(tolower(str[i]));

    i++;
    }

    i=0;


    //estrutura para percorrer a string, s� que sem o isalnum
    while(isalnum(str[i]))//condicao que vai percorrer a string enquanto s� tiver letras, quando encontarr o espa�, ele vai parar pq n�o vai mais true7
    {
        i++;
    }

    cout<<endl<<"Carcteres alfanumericos :"<<i<<endl;


    //isalpha � a mesma coisa do isalnum
    while(isalpha(str[i]))//condicao que vai percorrer a string enquanto s� tiver letras, quando encontarr o espa�, ele vai parar pq n�o vai mais true7
    {

        i++;
    }

    i=0;
    int cont{0};
    while(str[i])
    {
        if(isspace(str[i]))
        {
            cout<<"Caracter de espa�o:" <<str[i]<<endl;
            cont++;
        }else if(isalpha(str[i]))
        {
            cout<<"Caracter alfanumerico: "<<str[i]<<endl;
        }else{
            cout<<"Caracter n� alfabetico: "<<str[i]<<endl;
        }

        i++;
    }

    cout<<"Carcteres de espa�o :"<<cont<<endl;

	return 0;
}
