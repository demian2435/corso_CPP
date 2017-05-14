#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    fstream f("immagine.bmp",ios::out|ios::in|ios::binary);//chiediamo ui permessi di ingresso, uscita e modifica binaria del file
    f.seekg(0,ios::end);//seekg sarebbe spostati di 0 partendo da ios::end (cioè file stream-fine)
    long dimensione=f.tellg();//dimmi dove è il puntatore tellg
    cout<<"Dimensione: "<<dimensione<<endl;
    f.seekg(0,ios::beg);//spostati fino al'inizio BEGIN

//    char tipoImmagine[2]; //comando per leggere i primi 2 bite che ci dicono che formato è il file
//    f.read(tipoImmagine, 2);
//    string s(tipoImmagine);
//    cout<<"Tipo immagine: "<<s<<endl;

    char* immagineRAM=nullptr;//abbiamo appena creato un puntatore che punta ad un certo puto della RAM con valore nullo

    immagineRAM=new char[dimensione];//chiediamo di creare un cassetto in BLOCCO UNICO di bite grande quanto DIMENSIONE e di comunicare il primo di questi bite al puntatore creato prima
    f.read(immagineRAM, dimensione);//ora stiamo leggendo dalla RAM l'immagine da immagineRam per i byte di dimensione (da-a)

//f.seekp(5001,ios::beg);//Sposta il puntatore dentro F di 5001 bite partendo da INIZIO(BEG)


    for (int i=500;i<dimensione;i++)
        immagineRAM[i]=rand()%256; //sovrascriviamo tutti i pixel da 2000 fino alla fine dell'immagine nell RAM

    f.seekp(0,ios::beg);//torniamo all'inizio
    f.write(immagineRAM,dimensione);//montiamo le modifiche sul file originale (se commenti questo comando l'imagine non si modifica poiche resta solo nella RAM

    f.close();f.clear();
    delete[] immagineRAM;//svuotiamo la memoria RAM e restituiamo il casetto al sistema
    immagineRAM=nullptr;//sempre buona cosa dare valore 0 al puntatore altrimenti ci troviamo a puntare chissa dove

}
