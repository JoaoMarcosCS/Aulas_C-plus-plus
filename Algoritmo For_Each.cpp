#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

main()
{
        vector<double>n{10.3,123.4345,1234.54,34.32,36.45};

        for_each(n.begin(),n.end(),[](double num)//o for each utiliza uma funcão lambda
                 {
                     num+=10;
                    cout<<num<<endl;

                 });

                 for_each(n.begin(),n.end(),[](double num)//o for each utiliza uma funcão lambda
                 {

                    cout<<num<<endl;

                 });


	return 0;
}
