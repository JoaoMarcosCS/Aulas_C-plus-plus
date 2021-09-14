#include <iostream>
#include <utility>
#include <vector>


using namespace std;

main()
{
    const int tam{2};

    pair<string,int>par1("jao",100);//podemos inicalizar assim
    cout<<par1.first<<"-"<<par1.second<<endl;
    pair<string, int>par2;
    par2.first="carlo";//ou assim
    par2.second=1000;
    cout<<par2.first<<"-"<<par2.second<<endl;

    pair<string,int >par3[tam];//asim é um par de vetor

    par3[0].first="carlo";
    par3[0].second=1000;

    par3[1].first="carlo";
    par3[1].second=1000;

    par3[2].first="carlo";
    par3[2].second=1000;

    cout<<par3[0].first<<"-"<<par3[0].second<<endl;
    cout<<par3[1].first<<"-"<<par3[1].second<<endl;
    cout<<par3[2].first<<"-"<<par3[2].second<<endl;

    //ou podemos fazer assim

    par3[0]=make_pair("Brunão",10);
    cout<<par3[0].first<<"-"<<par3[0].second<<endl;

    //PODEMOS FAZER UM PAIR COM UM PAIR OU MAIS DENTRO DESSE PAIR!! VEJA SÓ CARALHO!!!

        pair<int,pair<string,double>>estoque;

        estoque=make_pair(10,make_pair("mouse",10.346));

        cout<<estoque.first<<" - "<<estoque.second.first<<estoque.second.second<<endl;


        //AGORA PODEMOS FAZER COM UM VECTOR

            vector<pair<string,double>>prod;

            prod.push_back(make_pair("Console",765.90));

        for(auto i:prod)
        {

            cout<<endl<<i.first<<" - "<<i.second<<endl;
        }


        return 0;
}
