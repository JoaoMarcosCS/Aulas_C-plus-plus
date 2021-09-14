#include <iostream>
#include <cctype>

using namespace std;

main()
{
    /*
        FUNÇÕES:
        isprint- verifica se o caracter é imprimivel- caracetres não imprimiveis \t,\n,\0
        isdigit- verifica se é um digito numerico
        iscntrl - verifica se é um caracter de controle como \t,\n,\0
        islower - verifica se é um caracter minusculo
        ispunct - verifica se é um pontução como ,.-;
        isupper - verifica se é um caracter maiusculo
        isxdigit - verifica se é um caracter hexadecimal
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


    //estrutura para percorrer a string, só que sem o isalnum
    while(isalnum(str[i]))//condicao que vai percorrer a string enquanto só tiver letras, quando encontarr o espaç, ele vai parar pq não vai mais true7
    {
        i++;
    }

    cout<<endl<<"Carcteres alfanumericos :"<<i<<endl;


    //isalpha é a mesma coisa do isalnum
    while(isalpha(str[i]))//condicao que vai percorrer a string enquanto só tiver letras, quando encontarr o espaç, ele vai parar pq não vai mais true7
    {

        i++;
    }

    i=0;
    int cont{0};
    while(str[i])
    {
        if(isspace(str[i]))
        {
            cout<<"Caracter de espaço:" <<str[i]<<endl;
            cont++;
        }else if(isalpha(str[i]))
        {
            cout<<"Caracter alfanumerico: "<<str[i]<<endl;
        }else{
            cout<<"Caracter nã alfabetico: "<<str[i]<<endl;
        }

        i++;
    }

    cout<<"Carcteres de espaço :"<<cont<<endl;

	return 0;
}
