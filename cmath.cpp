#include <iostream>
#include <cmath>
#define p <<endl;
#define pp <<endl
#define sp cout pp pp p
#define pi 3.141592265


using namespace std;


double radToGra(int a)//faz a conversao de radianos para graus
{
    return a*pi/180;
}
main()
{

    int ang=45;
    cout<<"Cosseno de 45"<<cos(ang*pi/180) p
    cout<<"Seno de 45"<<sin(ang*pi/180) p
    cout<<"Tangente de 45"<<tan(ang*pi/180) p

    sp

    cout<<"Arco Cosseno de 45"<<acos(radToGra(ang)) p
    cout<<"Arco Seno de 45"<<asin(radToGra(ang)) p
    cout<<"Arco Tangencial de 45"<<atan(radToGra(ang)) p


    sp

    //atn2 - Calcula o arco tangencial de dois parametros
    auto x=-10.0;
    auto y=10.0;

    cout<<"Arco Tangente de -10.0 e 10.0: "<<atan2(x,y)*180/pi p


     sp

     //exp - funcao exponecial
     auto x2=10.0
     cout<<"O valor exponencial de "<<x2<<" :"<<exp(x2) p

     cout p

     //log - logaritmo
     cout<<"Logaritmo de "<<x2<<" :"<<log(x2) p

     cout p

     //pow - potencia
     y=9;
     cout<<x2<<" elevado a "<<y<< " :"<<pow(x2,y) p

     //sqrt - raiz quadrada

     x=9;

     cout<<"Raiz quadrada de "<<x <<" :"<<sqrt(x) p

     //cbrt - cubica

     x=27;

     cout<<"Raiz cúbica de "<<x<<" :"<< cbrt(x) p

     sp

     //hypot - hipotenusa

     double ct1{3},ct2{4};

     cout<<"Catetos "<<ct1<<" "<<ct2<<" ->hipotenusa: "<<hypot(ct1,ct2) p
     cout<<"Catetos "<<ct1<<" "<<ct2<<" ->hipotenusa: "<<sqrt(pow(ct1,2)+pow(ct2,2))/*calculo*/ p
      sp


      //fmod - retorna o resto da divisão em float

      double e{5.7},f{2};

      cout<<"Resto da divisão: "<<fmod(e,f) p

      sp

      //round - arredonda normal

      double g{5.6},h{5.4};

      cout<<round(g)<<" "<< round(h) p
     cout<<rint(g)<<" "<<rint(h) p

     double m{-15.5},n{-6.732};
     cout<<"Módulos de m e n = "<<fabs(m)<<" "<<abs(n);




	return 0;
}
