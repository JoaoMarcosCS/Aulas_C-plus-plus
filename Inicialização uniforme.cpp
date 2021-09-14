#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct pessoa{
    string nome;
    int idade;

};

class Veiculo{
public:

    int tipo;
    string nome;
};
main()
{
    int j{10};
    string name{"Jão"};
    vector<int>valores{1,2,3,4,5,6};
    map<string,string>capitais{{"Minas Gerais","Belo Horizonte"}};//assim que se declara um map
    pessoa p1{"Jão",19};//Tem que estar  na ordem de declaração
    Veiculo v1{1,"Carro"};
    vector<int>::iterator it;
    map<string,string>::iterator it2;


    cout<<j<<endl;
    cout<<p1.nome<<endl;
    cout<<p1.idade<<endl;
    cout<<name<<endl;
    cout<<v1.tipo<<endl;
    cout<<v1.nome<<endl;

    for(it=valores.begin();it!=valores.end();it++)
    {
        cout<<*it<<endl;
    }

    for(it2=capitais.begin();it2!=capitais.end();it2++)
    {

        cout<<it2->first<<"-"<<it2->second<<endl;
    }
	return 0;
}
