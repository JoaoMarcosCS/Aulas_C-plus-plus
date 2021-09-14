#include <iostream>
#include <vector>
using namespace std;

auto soma(double n1,double n2)->int{//pode ser qualquer tipo mas temos que declarar qual vai ser seu retorno com ->

        return n1+n2;
}

int soma2(int n1, int n2)
{
    return n1+n2;
}

void soma()
{

    static auto j=0;//com o static, a variavel é armazenada em uma posição, e quando utilizarmos essa
    //variavel novamente, nós iremos utilizar esse mesmo espaço, ou seja, não iremos criar um novo espaço declarando-a novamente
    //podemos fazer j=0, mas nao podemos fazer novamente auto j=0
    j++;
    cout<<j<<endl;
}
main()
{
    auto num=10;//temos que, ao declarar uma cvariavel do tipo auto, nós já temos que fazer a atribuição de um valor
    auto valor=11.3;
    auto nome="cartola";
    vector<int>v{10,20,30,405,5,40};
    auto res=soma(4.5,5.3);
    cout<<res<<endl;
    register int cont=3;//o register ele tenta armazenar a variavel no sistema, ele tenta, nao aramzena
    cout<<cont<<endl<<endl;
    for(register auto it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;

        for(auto i=0;i<=5;i++)
        {

            soma();
        }
	return 0;
}
