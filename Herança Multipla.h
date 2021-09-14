#ifndef HERANÇA MULTIPLA__H_iNCLUDED
#define HERANÇA MULTIPLA__H_iNCLUDED
#include <iostream>

using namespace std;

class Base1{
	
	public: 
	void impbase1();
};

void Base1::impbase1()
{
	cout<<"Base 1";
}

class Base2{
	
	public:
		void impbase2();
};


void Base2::impbase2()
{
	cout<<"Base 2";
}


class JM:public Base1, public Base2{
};


#endif
