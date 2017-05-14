#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

struct t_nodo
{
    int info;
    t_nodo *sx;
    double costo_sx;

    t_nodo *dx;
    double costo_dx;
};

t_nodo *crea_albero_bilanciato (int quanti_nodi)
{
    if (quanti_nodi==0)
        return nullptr;
    else
    {
        t_nodo *nuovo = new t_nodo;
        nuovo->info=rand()%100;

        int quanti_a_sx= quanti_nodi/2;
        int quanti_a_dx= quanti_nodi-quanti_a_sx-1;

        nuovo->sx = crea_albero_bilanciato(quanti_a_sx);
        nuovo->dx = crea_albero_bilanciato(quanti_a_dx);

        return nuovo;
    }
}

void stampa_albero_Fcamuso (t_nodo *root)
{
    if(root != nullptr)
    {
        cout<<root->info<<endl;
        stampa_albero_Fcamuso(root->sx);
        stampa_albero_Fcamuso(root->dx);
    }
}

void stampa_albero (t_nodo *root)
{
    cout<<root->info<<endl;

    if(root->sx!=nullptr)
        stampa_albero(root->sx);
    if(root->dx!=nullptr)
        stampa_albero(root->dx);
}

int fattRicorsiva (int n)
{
    if (n>1)
    return n*fattRicorsiva(n-1);
}

int potenza (int base,int esponente)
{
    if (esponente>1)
        return base*potenza(base,esponente-1);
}

int main()
{
//    t_nodo *ALBERO = new t_nodo;
//    ALBERO= crea_albero_bilanciato(10000);
//    stampa_albero_Fcamuso (ALBERO);


    int numero = potenza(25,0);
    cout<<numero;


    return 0;
}
