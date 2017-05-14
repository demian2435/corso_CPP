#include <iostream>

using namespace std;

int main()
{
    cout<<1/3<<endl<<1./3<<endl<<1/3.<<endl; //le divisioni tra numeri interi danno come risultato solo numeri interi

    cout.precision(50);

    float x1=1./3;
    double x2=1./3;
    long double x3=1./3;
    long double a = 314e-6;//e-2 o e+2 significa in base decimale l'esponente, quindi -2 sarebbe -100 e +2 sarebbe +100
    cout<<x1<<endl<<x2<<endl<<x3<<endl<<a<<endl<<endl;

    if ((8-6.4)==1.6)
        cout<<"VERO1"<<endl;
    else
        cout<<"FALSO1"<<endl;

    if (((8-6.4)-1.6) < .00001)
        cout<<"VERO2"<<endl;
    else
        cout<<"FALSO2"<<endl;



    float MOL=0;
    long double xMOL=0;

    long double xx=1./3;//AGGIUNGENDO LA L SI PASSA ALA NUMERAZIONE LONG PROVA A TOGLIERE LA L E MOLTPLICARE PER 3
        cout<<xx<<endl<<"moltiplica per"<<endl;
        cin>>MOL;

    xMOL=xx*MOL;

    cout<<endl<<xMOL;




}



