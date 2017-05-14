#include <iostream>
#include "data.h"

using namespace std;

int main()
{
    Data nonna {3,1,1931};
    cout<<"NONNA "<<nonna.stampa_data()<<endl;

    Data mamma {23,4,1961};
    cout<<"MAMMA "<<mamma.stampa_data()<<endl;

    Data damiano {1,9,1985};
    cout<<"DAMIANO "<<damiano.stampa_data()<<endl;

    Data oggi {};
    cout<<"OGGI "<<oggi.stampa_data()<<endl;
//
//    if (d0==d1)
//        cout<<"Sono uguali \n";
//    else
//        cout<<"Sono diverse \n";
//
//    if (d3<d0)
//        cout<<d3.stampa_data()<<" E' minore di "<<d0.stampa_data()<<endl;
//    else
//        cout<<d3.stampa_data()<<" E' maggiore di "<<d0.stampa_data()<<endl;

    int long long nonna_o=Data::conta_giorni(nonna,oggi);
    int mamma_o=Data::conta_giorni(mamma,oggi);
    int damiano_0=Data::conta_giorni(damiano,oggi);

    cout<<nonna_o*86400<<endl<<mamma_o*86400<<endl<<damiano_0*86400;



}
