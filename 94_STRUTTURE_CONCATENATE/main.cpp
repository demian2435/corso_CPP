#include <iostream>
#include <sys/time.h>

using namespace std;

//CREIAMO LA STRUCT RIGA_SCONTRINO POICHE' SERVE NELLA STRUCT SCONTRINO, PENSEREMO A CREARLA IN SEGUITO
struct t_riga_scontrino;

//CREIAMO LA STRUCT SCONTRINO, CHE CONTIENE L'INDIRIZZO *HEAD CIOE' IL PRIMO DELLA LISTA DI CONCATENAZIONE
struct t_scontrino
{
    string data;
    int codice_punto_vendita;
    string codice_cassa;

    t_riga_scontrino *head; //ABBIAMO APPENA CREATO UNA RIGA SCONTRINO "VUOTA" CHE HA UN IDIRIRZZO MODIFICABILE
};

//CREIAMO LA STRUCT RIGA_SCONTRINO, CHE AL SUO INTERNO CONTIENE L'INDIRIZZO DEL SUCCESSIVO
struct t_riga_scontrino
{
    int codice_prodotto;
    double qta;
    double prezzo;

    t_riga_scontrino *next; //ABBIAMO APPENA CREATO UNA RIGA SCONTRINO "VUOTA" CHE HA UN IDIRIZZO MODIFICABILE
};

//FUNZIONE DI CONCATENAZIONE: ENTRANO DUE PUNTATORI RIGA_SCONTRINO, UNO E' MODIFICABILE L'ALTRO E' IN SOLA LETTURA
//LA RIGA SCONTRINO CHE ABBIAMO CREATO HA GENERATO UN NEXT_RIGA_SCONTRINO CHE PERO' E' VUOTO MA PUO' CONTENERE UN IDIRIZZO
//ORA NOI DIAMO A QUELL'INDIRIZZO IL VALORE DEL PRIMO DELLA LISTA, QUINDI ORA CI TROVIAMO UN NUOVO RIGA_SCONTRINO
//CHE COME "NEXT" HA LA PRIMA RIGA_SCONTRINO;
//FATTO QUESTO, DOBBIAMO MODIFICARE L'INDIRIZZO CONTUNUTO NELLO "SCONTRINO_MADRE" INIZIALE, E CIOE' L'INDIRIZZO
//DELLA FAMOSA PRIMA RIGA CHE AL MOMENTO PUNTA AD UNA RIGA_SCONTRINO "NULLA", ED INFATTI NOI INSERIAMO
//L'INDIRIZZO DEL NUOVO RIGA_SCONTRINO GENERATO (CHE COME NEXT HA IL PRIMO SCONTRINO "NULLO") AL POSTO
//DEL "NULLO" CHE ORA E' STATO DECLASSATO A NEXT
void ins_testa (t_scontrino* scontrino,t_riga_scontrino* nuovo) // LIFO= last in first out
{
    nuovo->next=scontrino->head;
    scontrino->head=nuovo;
}

void ins_coda (t_scontrino* scontrino,t_riga_scontrino* nuovo) //FIFO= first in first out
{
    if (scontrino->head==nullptr)
        ins_testa(scontrino,nuovo);

    else
    {
        t_riga_scontrino *scorri = scontrino->head;

        while (scorri->next != nullptr)
            {
               scorri=scorri->next;
            }
        nuovo->next=nullptr;
        scorri->next=nuovo;
    }
}

void stampa_righe_scontrino (const t_scontrino* indirizzo_riga_scontrino)
{
    t_riga_scontrino *scorri = indirizzo_riga_scontrino->head;
    while (scorri != nullptr)
    {
        cout<<"----------\n";
        cout<<"Prodotto: "<<scorri->codice_prodotto<<endl;
        cout<<"Quantita': "<<scorri->qta<<endl;
        cout<<"Prezzo: "<<scorri->prezzo<<endl;

        scorri=scorri->next;
    }
}

t_riga_scontrino *calcolo_ricerca (t_riga_scontrino* head,t_riga_scontrino* &precedente,int cercato)
{
    precedente=nullptr;
    t_riga_scontrino *corrente = head;

    while (corrente != nullptr && corrente->codice_prodotto != cercato)
    {
        precedente=corrente;
        corrente=corrente->next;
    }
    return corrente;
}

bool elimina_nodo (t_riga_scontrino* &head,int codice_prodotto)
{
    t_riga_scontrino *precedente=nullptr;
    t_riga_scontrino *trovato=calcolo_ricerca(head,precedente,codice_prodotto);

    if(trovato==nullptr)
        return false;

    if(precedente==nullptr)
        head=head->next;
    else
        precedente->next=trovato->next;

    delete trovato;
    return true;
}

void elimina_tutti_nodi (t_riga_scontrino* &head)
{
    t_riga_scontrino *temp = head;

    while (head != nullptr)
    {
        head=head->next;
        delete temp;
        temp=head;
    }
}

int main()
{
    timeval start, stop;
    double elapsedTime;

    t_riga_scontrino *vuoto=nullptr;
    t_scontrino *scontrino = new t_scontrino {"02-06-2016",123,"CassaL1",nullptr};

    gettimeofday(&start, NULL);
    for (int i=1;i<10000;i++)
    {
        t_riga_scontrino *nuovo = new t_riga_scontrino{i,10*i,100.0*i};
        ins_coda(scontrino,nuovo);
    };
    gettimeofday(&stop, NULL);

/*  SPIEGAZZIONE SEMPLIFICATA DEL CAOS DESCRITTO SOPRA (LIFO)

    t_scontrino *scontrino_madre = new t_scontrino {"02-06-2016",123,"CassaL1",nullptr};

    t_riga_scontrino *prima_riga = new t_riga_scontrino {1,10,100,nullptr};
    prima_riga->next=scontrino_madre->head;
    scontrino_madre->head=prima_riga;

    t_riga_scontrino *seconda_riga = new t_riga_scontrino {2,20,200,nullptr};
    seconda_riga->next=scontrino_madre->head;
    scontrino_madre->head=seconda_riga;

    t_riga_scontrino *terza_riga = new t_riga_scontrino {3,30,300,nullptr};
    terza_riga->next=scontrino_madre->head;
    scontrino_madre->head=terza_riga;

    stampa_righe_scontrino (scontrino_madre);
*/

/////////////////////////RICERCA PRODOTTO
//    int ricerca=0;
//    cout<<"\n\nInserisci il codice prodotto da cercare: ";
//    cin>>ricerca;
//    t_riga_scontrino *trovato=calcolo_ricerca(scontrino->head,vuoto,ricerca);


////////////////////////CANCELLA PRODOTTO
//    int cancella=0;
//    cout<<"\n\nInserisci il codice prodotto da cancellare: ";
//    cin>>cancella;
//    bool gino=elimina_nodo(scontrino->head,cancella);
//
//    if(gino)
//        cout<<"Eliminato il prodotto n: "<<cancella<<endl;
//    else
//        cout<<"Prodotto non trovato"<<endl;


////////////////////////ELIMINA TUTTE LE RIGHE
//    elimina_tutti_nodi (scontrino->head);


//    stampa_righe_scontrino (scontrino);

    elapsedTime = (stop.tv_sec - start.tv_sec) * 1000.0;
    elapsedTime += (stop.tv_usec - start.tv_usec) / 1000.0;
    cout << " , " << elapsedTime << " ms.\n";

    return 0;
}
