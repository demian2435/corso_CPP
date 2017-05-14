#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int posizione_su_asseX= 0;
    string dato_stringa = " ";

    cout<<"Inserisci l'ascessa (intera) del punto:  ";
    cin>>dato_stringa;

    try //try significa prova a fare, se c'è un errore passa a catch
    {
    posizione_su_asseX = stoi (dato_stringa); //stoi è la coversione della stringa in intero
    stringstream convert(dato_stringa); convert>>posizione_su_asseX;

    if (posizione_su_asseX < -3)
        cout<<"Si trova a sinistra di -3";
    else
        cout<<"Non si trova a sinistra di -3";
    }
    catch (...)//i tre punti significa accetta tutti gli errori
    { cout<<"Non è un numero oppure e' troppo grande";}

}
