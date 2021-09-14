#include <iostream>

using namespace std;


class Aviao{
	
	public:
		
		int vel=0;
		int velmax;
		string tipo;
		void inicia(int tp);
	
	private:
		
		
};

void Aviao::inicia(int tp)
{
	
	switch(tp)
	{
		case 1:this->velmax=350;this->tipo="Jato";break;//o this serve para indicar que a variável 
		//que está trabalhada é da classe avião, no nosso caso
			case 2:this->velmax=450;this->tipo="Monomotor";break;
				case 3:this->velmax=100;this->tipo="Planador";break;
	}
}

main()
{
	Aviao *av1=new Aviao();//aqui estamos declarando um novo objeto do tipo aviao, no nosso caso
	
	av1->inicia(3);
	
	cout <<av1->velmax;
	
	return 0;	
}
