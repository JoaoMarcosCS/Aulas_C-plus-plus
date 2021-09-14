#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#define p printf

using namespace std;

main()
{
	
	int  j=124;
	p("%x",j);	
	cout<<"\nj em hex no cout:"<<hex<<j;//se fosse para base octal, nós colocariamos no ligar do hex, o oct,se decimal, dec
	// ou podemos usar esse método
	cout<<endl<<setbase(8)<<j;// binario não tem
	//u-unsigning para definir o modulo de inteiros, ou seja, o u só imprime inteiro positivos
	
	double pi=M_PI;
	
	p("\nPI: %.4f",pi);
	cout.precision(2);
	cout<<"\n"<<pi;
	cout<<"\nPI em notação cientifica:"<<setw(14)<<std::scientific<<pi;
	
	return 0;
}
