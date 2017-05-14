#include <iostream>

using namespace std;

int main()
{
    for (int i=-100; i<=0; i++)
        for (int j =-100; j<=0; j++)
        {
            int vi=i, vj=j;
            vi = vj + (vj = vi)*0;
            cout<<"i "<<i<<"j "<<j<<"--- vi "<<vi<<"vj "<<vj<<endl;
        }
}
