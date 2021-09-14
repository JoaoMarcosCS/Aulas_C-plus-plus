#include <iostream>

using namespace std;
//nesse projeto, só pode existir 1 main

extern int num;//aqui estamos dizendo que vamos utilizar o num nesse programa, mas aqui, não podemos
//declarar extern int num{10}, pois já fizemos isso no programa main;

double valor{990};

void impnum()
{
    num++;
    cout<<num<<endl<<valor<<endl;
}
