#include <iostream>
#include <functional>

using namespace std;

int soma(int n1,int n2)
{

    return n1+n2;
}

struct cbf{


    int num;
    int dobro(){
        return num*2;
    }
};

class Cbf{

     public:
    int num;
    Cbf(int n):num(n){};
    int dobro(){
        return num*2;
    }
};

main()
{

    auto s1=bind(soma,2,5);//associa a variavel a uma funca, ou seja, quando eu chamar a variavel vai chamar a funcao

    cout<<"Soma:"<<s1()<<endl<<endl;

    int j=10;

    auto m=cref(j);//o cref faz um entrelaçamento micronanoquantico entre as variaveis, quando uma for modificada a outra tambem será
    //PARA USARMOS O ENTRELAÇAMENTO QUANTICO, AS VARIAVEIS TEM QUE SER DO MESMO TIPO


    j++;

    cout<<"Entrelaçamento micronânoquântico:"<<m<<j<<endl;

    cbf n1{10};

    auto dobro2=mem_fn(&cbf::dobro);//asscia uma variavel a uma método de uma struct, class

    cout<<endl<<"Dobro:"<<dobro2(n1)<<endl;

    Cbf n2{7};

    auto dobro3=mem_fn(&Cbf::dobro);

    cout<<endl<<"Dobro em classe:"<<dobro3(n2)<<endl;



	return 0;
}
