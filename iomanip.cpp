#include <iostream>
#include <iomanip>
#define p <<endl;
#define pp <<endl
#define sp cout pp pp p

using namespace std;

main()
{
    //setbase - decimal,hexa

    cout<<setbase(8) p
    cout<<10 pp p
    cout<<setbase(10) p

    //setw - largurado campo
    cout<<setw(20);
    cout<<"cbf";
    cout<<setw(10);
    cout<<"junior";
    cout<<setw(40);
    cout<<"Curso de c++" pp p

    //setfill - preenchimento do compo

    cout<<"Canal: "<<setw(20) <<setfill('.') <<"CBF cursos " pp p

    //setprecision - precisão de valores float e double
    double pi=3.14159;
    cout<<"Valor de PI:"<< setprecision(2)<<pi pp p

	return 0;
}
