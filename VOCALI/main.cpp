#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char c='a';
    cout<<"Inserisci una lettera:  ";
    cin>>c;
    char cUp=toupper(c);//TOUPPER -> Comando per rendere maiuscole tutte le lettere inserite

//    if(isalpha(cUp)) //ISALPHA -> Domanda se il segno registrato in C � una lettera
//        if(cUp=='A'||cUp=='E'||cUp=='I'||cUp=='O'||cUp=='U')
//        cout<<"vocale";
//        else //Gli ELSE lavorano con l'IF pi� vicino
//        cout<<"consonante";
//    else
//    cout<<"Non e' una lettera";

    string vocali="AEIOU";
    string consonanti="BCDFGHJKLMNPQRSTVWXYZ";
    if (vocali.find(cUp) !=string::npos) //.find � un comando per cercare all'inerno della stringa e c'� (cUp)
        cout<<"vocale";
    else
        if (consonanti.find(cUp) !=string::npos)//NPOS � un valore fisso che si genera quando non trova nulla, quindi se !(falso) non trovato allora � trovato
        cout<<"consonante";
        else
        cout<<"non e' un carattere";



}
