#include <iostream>

using namespace std;

int*filtra(int v[],int num_ele,int minAccettabile,int maxAccettabile,int &filtrati)
{
    filtrati=0;//azzeriamo per sicurezza la variabile

    for(int i=0;i<num_ele;i++)//andiamo a calcolare di quanti numeri sarà grande l'array da restituire
        if(v[i]>=minAccettabile && v[i]<=maxAccettabile)
        filtrati++;

    int*p=new int[filtrati];//creaiamo l'array grande esattamente quanto serve

    for(int i=0,copiati=0; i<num_ele;i++)
        if(v[i]>=minAccettabile && v[i]<=maxAccettabile)
            p[copiati++]=v[i];//stupenda funzione, copiati incremena solo l'ingresso in p, mentre i manda avanti il processo

    return p;//dopo tutti i giri rimandiamo al main solo l'array contenente i numeri che hanno superato il confronto
}

int main()
{
    int vettore[]={6,-78,-59,11,73,-26,77,-92,-12,7,-31,77,84,15};

    int quantiFiltrati=0;
    int*risultato=filtra(vettore,14,-10,80,quantiFiltrati);

    for(int i=0;i<quantiFiltrati;i++)
        cout<<risultato[i]<<" ";

    delete[] risultato;
    return 0;
}
