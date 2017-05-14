#include <iostream>

using namespace std;

int main()
{
    const int MAX_HOBBY=6;
    string hobby[MAX_HOBBY]; //={"zero","uno","due","tre"}; //array da 4

    bool stop=false;
    int inserimento=0;

    while (inserimento<MAX_HOBBY && hobby[inserimento]!="F")
    {
        cout<<"Inserisci un hobby (F per finire) -->";
        getline(cin,hobby[inserimento]);

        if (hobby[inserimento]!="F")
            inserimento++;
    }

//    int posizione=0;
//    while (posizione<MAX_HOBBY)
//    {
//        cout<<posizione+1<<" : "
//            <<hobby[posizione]<<endl;
//        posizione++;
//    }

    for (int posizione=0; posizione<inserimento; posizione++) //se int resta solo nel cicloFOR
        cout<<posizione+1<<": "<<hobby[posizione]<<endl;
}
