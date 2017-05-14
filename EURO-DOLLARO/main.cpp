#include <iostream>
using namespace std;

int main()
{
    int euro=0;
    double cambio=0;

    cout <<"Inserisci la somma in euro:   ";
    cin >>euro;

    if(euro<=0)
    {
    cout <<"Inserisci un valore maggiore di zero"<< endl;
    }
    else
    {
    cout <<"Fattore di cambio?   ";
    cin >>cambio;

        if (cambio <=0)
        {
        cout <<"Inserisci un valore maggiore di zero"<< endl;
        }

        else
        {
        cout <<"In dollari:   "<<euro*cambio<<endl;
        }
    }

    return 0;
}
