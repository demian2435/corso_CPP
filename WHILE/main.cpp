#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int numero_estratto=0;
    int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,lanci=0;


    while (true)
    {
        srand(time(nullptr));
        numero_estratto=rand()%2+1;//rand=random; per simulare un dado facciamo modulo 6 cioe tutte le somme verranno divise per 6 ed il resto ci dirà cosa è uscito, aggiungiamo 1 per cambiare il range da 0a5 a 1e6
        lanci=lanci+1;

    switch (numero_estratto)
    {
        case 1: n1=n1+1;
        break;
        case 2: n2=n2+1;
        break;

        }
        cout<<"1="<<n1<<" 2="<<n2<<" 3="<<n3<<" 4="<<n4<<" 5="<<n5<<" 6="<<n6<<" LANCI="<<lanci<<endl;



        if (n1>100&&n2>100)
            break;
    }



}
