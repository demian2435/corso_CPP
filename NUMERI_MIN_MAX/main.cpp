#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//FUNZIONE DI STAMPA

void stampaNUM(int numeri[],int inserimento)
{
    cout<<"ELENCO NUMERI"<<endl;
    cout<<"------------------------------------------"<<endl;

    for(int posizione=0;posizione<inserimento;posizione++)
        cout<<setw(4)<<posizione+1<<": "<<setw(8)<<numeri[posizione]<<endl;

    cout<<"------------------------------------------"<<endl;
}

int trovaPosMinimo (int arrayInt[], int partiDa, int quanti)
{
    int posMinimo=partiDa;
    for(int posEle=partiDa+1;posEle<quanti;posEle++)
        if(arrayInt[posEle]<arrayInt[posMinimo])
            posMinimo=posEle;

    return posMinimo;
}

int main()
{
    const int MAX_NUM=100000;
    int numeri[MAX_NUM];
    int posizioniMin[MAX_NUM];
    int posizioniMax[MAX_NUM];

    int inserimento=0;
    int posizione=0;

    bool stop=false;

//INSERIMENTO NUMERI "UMANO"

//    while (!stop)
//    {
//        if(inserimento<9)
//        cout<<"Inserisci i numeri da calcolare (0"<<inserimento+1<<" di "<<MAX_NUM<<") [0 per finire] --> ";
//        else
//        cout<<"Inserisci i numeri da calcolare ("<<inserimento+1<<" di "<<MAX_NUM<<") [0 per finire] --> ";
//
//        cin>>numeri[inserimento]; //=rand();
//
//        if (numeri[inserimento]!=0)
//            inserimento++;
//        else
//        stop=true;
//    }

//INSERIMENTO NUMERI "CPU"

    for(inserimento=0;inserimento<MAX_NUM;inserimento++)
        numeri[inserimento]=rand(); //da uno a 100=rand()%100+1;


//    stampaNUM(numeri,inserimento);

//CALCOLO MINIMO

    int quantiMin=0;

//    int bestMin=0;
//    for(int posizione=1;posizione<inserimento;posizione++)
//        if(numeri[posizione]<numeri[bestMin])
//            bestMin=posizione;

    int bestMin=trovaPosMinimo(numeri,0,inserimento);

    for(int posizione=0;posizione<inserimento;posizione++)
        if(numeri[posizione]==numeri[bestMin])
            posizioniMin[quantiMin++]=posizione;

    cout<<"Il numero piu' piccolo e' ("<<numeri[bestMin]
        <<") ed appare "<<quantiMin<<" volta/e:"<<endl;

//    for(int posizione=0;posizione<quantiMin;posizione++)
//        cout<<"In posizione "<<posizioniMin[posizione]+1<<" = "<<numeri[posizioniMin[posizione]]<<endl;

    cout<<endl;

//CALCOLO MASSIMO

    int bestMax=0;
    int quantiMax=0;

    for(posizione=1;posizione<inserimento;posizione++)
        if(numeri[posizione]>numeri[bestMax])
            bestMax=posizione;

    for(int posizione=0;posizione<inserimento;posizione++)
        if(numeri[posizione]==numeri[bestMax])
            posizioniMax[quantiMax++]=posizione;

    cout<<"Il numero piu' grande e' ("<<numeri[bestMax]
        <<") ed appare "<<quantiMax<<" volta/e:"<<endl;

//    for(int posizione=0; posizione<quantiMax;posizione++)
//        cout<<"In posizione "<<posizioniMax[posizione]+1<<" = "<<numeri[posizioniMax[posizione]]<<endl;

    cout<<endl;

//SOMMA TOTALE NUMERI

    int somma=0;

    for (posizione=0; posizione<inserimento; posizione++) //se int resta solo nel cicloFOR
        somma+=numeri[posizione];//<-- modo nuovo||modo vecchio --->somma=somma+numeri[posizione]; somma+= (i%2) ? 0 : numeri[posizione]// ? se è vera l'espressione, : se falsa

    cout<<"La somma dei "<<posizione<<" numeri e' = "<<somma;

    cout<<endl;

//MESSI IN FILA DAL PIU' PICCOLO AL PIU' GRANDE

    for(int partiDa=0;partiDa<inserimento-1;partiDa++)
    {
        int posMinimo=trovaPosMinimo(numeri,partiDa,inserimento);

        int tmp=numeri[partiDa];
        numeri[partiDa]=numeri[posMinimo];
        numeri[posMinimo]=tmp;
    }

    cout<<endl<<"Ordinati numeri MIN_MAX"<<endl;

//    stampaNUM(numeri,inserimento);
}

