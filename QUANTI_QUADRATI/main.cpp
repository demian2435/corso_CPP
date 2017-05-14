#include <iostream>

using namespace std;

int main()
{
    int verticale=9,orizzontale=9;
    int tutte[9]={};
    int timer=0;

    for(int i=orizzontale;i>=0;i--)
{   verticale--;int sommalinea=0;
    for (int i=verticale;i>=0;i--)
        sommalinea+=i*9;cout<<sommalinea<<endl;

    tutte[timer]=sommalinea;timer++;
}

    for(int i=0;i<9;i++)
        cout<<tutte[i]<<endl;

}
