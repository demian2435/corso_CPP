#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char c='a';
    cout<<"Inserisci una lettera:  ";
    cin>>c;
    char cUp=toupper(c);//TOUPPER -> Comando per rendere maiuscole tutte le lettere inserite

//    if(isalpha(cUp)) //ISALPHA -> Domanda se il segno registrato in C è una lettera
//        if(cUp=='A'||cUp=='E'||cUp=='I'||cUp=='O'||cUp=='U')
//        cout<<"vocale";
//        else //Gli ELSE lavorano con l'IF più vicino
//        cout<<"consonante";
//    else
//    cout<<"Non e' una lettera";

    string vocali="AEIOU";
    string consonanti="BCDFGHJKLMNPQRSTVWXYZ";
    if (vocali.find(cUp) !=string::npos) //.find è un comando per cercare all'inerno della stringa e c'è (cUp)
        cout<<"vocale";
    else
        if (consonanti.find(cUp) !=string::npos)//NPOS è un valore fisso che si genera quando non trova nulla, quindi se !(falso) non trovato allora è trovato
        cout<<"consonante";
        else
        cout<<"non e' un carattere";



}
