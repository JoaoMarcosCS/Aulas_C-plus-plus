#include <C:\Users\Jo�o Marcos\Documents\Jo�o Marcos - Cotec\C++\Heran�a Multipla.h>
#include <iostream>

using namespace std;

main()
{
	Base1 *obj1=new Base1();
	Base2 *obj2=new Base2();
	JM *obj3=new JM();
	obj1->impbase1();
	cout<<endl;
	obj2->impbase2();
	
	obj3->impbase2();
	obj3->impbase1();
	return 0;
}
