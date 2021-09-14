#include <iostream>
#include <bits/stdc++.h>

using namespace std;

main()
{
    /*É UMA BIBLIOTECA QUE SUBSTITUI TODAS AS OUTRAS DIRETIVAS BASICAS*/

        pair<int,int>par;
        par=make_pair(10,5);

        cout<<par.first<<" - "<< par.second<<endl;

        vector<double>vetor{102.65,1586.4};

        for(auto i:vetor)
        {
            cout<<i<<endl;

        }

        double x=10;

        cout<< pow(x,2)<<endl;

        fstream f;

        f.open("pode excluir.dat",fstream::in|fstream::out|fstream::app);
        f<<"Arquivo teste da biblioteca bits/stdc++"<<endl;
        f.close();

        printf("\nfunciona com o printf\n");



	return 0;
}
