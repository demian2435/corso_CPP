#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream f("APPUNTI.txt");
    string riga="";
    int Trovato=0;
    string PAROLA="";

    if (f)
    {
        cout<<"Inserisci parola da cercare: ";
        cin>>PAROLA;

        while (getline(f, riga))
        {
            size_t PP=0;

            while ((PP=riga.find (PAROLA,PP)) !=string::npos)
            {
                    cout<<endl<<riga<<endl<<endl<<PP<<endl;
                    PP++;
                    Trovato++;
            }
        }
    }
    else
        cout<<"Problemi con il file";

    cout<<"Testo completato, parola "<< PAROLA<<" trovata --> "<<Trovato;
    f.close (); f.clear();

//    cin>>Roma;
//    size_t posizione= T.find(Roma,0);
//
//    cout<<posizione<<endl<<string::npos<<endl<<endl;
//
//    if (posizione != string::npos)
//        cout<<"TROVATO";
//    else
//        cout<<"NON TROVATO";

}
