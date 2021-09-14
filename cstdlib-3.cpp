#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

main()
{
    vector<int> vecto{1,2,3,4,5,6,7,8,9};
    size_t tam;//variavel especifica para receber valor de tamanho
    //EM C++11 É PREFERIVEL USAR O SIZE_T PARA ARMAZENAR VALORES DE TAMANHO
    tam=vecto.size();

    cout<<tam<<endl<<endl<<endl;


    int n=-10;

    cout<<abs(n)/*retorna o modulo*/<<endl;

    div_t res;//declaração da variavel do tipo div_t que vai poder ser dividida
    /*tambem existe para ldiv_t, para long int e lldiv_t*/
    int den{3},num{10};

    res=div(num,den);
    /*tambem temos o lldiv para long long int e ldiv para long int e llabs para retorno de absoluto para long*/

    cout<<num<<" dividido por "<<den<< " = "<< res.quot<< " e com resto "<< res.rem<<endl<<endl;
	return 0;
}
