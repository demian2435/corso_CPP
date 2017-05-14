#include <iostream>

using namespace std;

struct A
{
    int xx;
    int yy;
    int zz;
};


struct B
{
    A alpha;
    A beta;
};

struct cartella1
{
    B insieme;
};

int main()
{

    cartella1 MARIO={{{1,2,3},{78,72,73}}};

    cout<<MARIO.insieme.beta.xx;

}
