#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

main()
{

    setlocale(LC_ALL,"portuguese");

    char *txt1;
    char txt2[]="Kill Bill volume 2 é pior que o volume 1!";
    char pesquisa='v';

    txt1=(char*)/*typecast para ter retorno igual a char*/memchr(txt2,pesquisa,strlen(txt2));

    if(txt1!=NULL){
            cout<<"Letra "<<pesquisa<<" encoontrada na posição: "<<txt1-txt2+1<<endl;
            }else{
                }
                cout<<"Letra "<<pesquisa<<" não encontrada"<<endl;


                char txt3[]="Duas vezes dois igual a uma vez o quatro";
                char *c;
                 pesquisa='D';

                c=strchr(txt3, pesquisa);//mostra a ultima ocorrencia na string da letra pesquisada

                cout<<endl<<"Pos: "<<c-txt3+1<<endl;


                char txt4[]="De novo essa porcaria";
                char chave[]="jsom+,;";
                int i;

                i=strcspn(txt4,chave);//pesquisa na string as letras/caracter que estao na variavel chave
                //essa função vai retronar para o i a posição da primeira ocorrenca das letras na chave
                cout<<endl<<"Ocorrencia da letra/caractér "<<txt4[i]<<" na posição:"<<i+1<<endl;


                pesquisa='o';
                c=strrchr(txt4,pesquisa);//retorna a ultima ocorrencia na string
                cout<<endl<<"Ocorrencia da letra/caractér na posição:"<<c-txt4<<endl;

                char txt5[]="Como cortar a string usando o strtok /p /c";

                char corte[]="/";

                c=strtok(txt5,corte);

                /*while(c!=NULL)
                {
                    cout<<c<<endl;
                    c=strtok(NULL,corte);

                }*/
                cout<<c;
                c=strtok(NULL,corte);
                cout<<endl<<endl<<c;
                c=strtok(NULL,corte);
                cout<<endl<<endl<<c;




	return 0;
}
