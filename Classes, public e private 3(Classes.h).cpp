#include <iostream>
#include <C:\Users\João Marcos\Documents\João Marcos - Cotec\C++\Classes.h>
using namespace std;



main()
{
		Veiculo *v1=new Veiculo(1);
		
		v1->setLigado(0);
		
	 	(v1->getLigado())? cout<<"O veiculo 1 esta ligado":cout<<"O veiculo 1 esta desligado"<<endl;	
		cout<<v1->getVelMax()<<endl;	
	
	return 0;
}
