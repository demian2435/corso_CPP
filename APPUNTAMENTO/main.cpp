#include <iostream>

using namespace std;

int main()
{

    string PUL;

    cout << "Inserisci il nome della pulzella --> ";
    cin>>PUL;

    cout<<"\nNome di pulzella non riconosciuto"<<endl<<"\nReinserire il nome della pulzella --> ";
    cin>>PUL;

    cout<<"\nNome valido"<<endl<<"\nInserire interazione desiderata --> ";
    cin>>PUL;

    for(int i=0;i<10000;i++)
        cout<<i;

    cout<<endl<<endl<<"Calcolo terminato, premere (Y) per conoscere risposta"<<endl;
    cin>>PUL;

    cout<<endl<<endl<<"Trovata cena in luogo sconosciuto per il giorno 21.12.2016 alle ore 20:00 presso Ospedale San Camillo(Roma).."<<endl<<endl<<"Confermo Y/N?";
    cin>>PUL;

    cout<<endl<<endl<<"Video inviato tramite WhatsApp, AUGURI!";

}
