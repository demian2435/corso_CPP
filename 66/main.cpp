#include <iostream>
#include <ctime>

using namespace std;

int generaNumeroCasuale(int n1,int n2);//PROTOTIPO

int main()
{
    srand(time(0));//MAGICO RAND
    int massimo=0;
    int minimo=0;

    cout<<"Massimo numero da estrarre? ";
    cin>>massimo;
    cout<<"\nMinimo numero da estrarre? ";
    cin>>minimo;

    int pensatoDalPc=generaNumeroCasuale(massimo,minimo);
    int tuoTentativo=0;

    while (tuoTentativo!=pensatoDalPc)
    {
        cout<<"Indovina il mio numero --> ";
        cin>>tuoTentativo;

        if(tuoTentativo!=pensatoDalPc)
            cout<<"Riprova!"<<endl;
    }

    cout<<"Bravo!";
}

int generaNumeroCasuale(int n1, int n2)//FUNZIONE se aggiungi &n1 significa che il dato inserito verrà modificato dalla funzione, e se stampi ti dice l'indirizzo nella ram
{
    if(n1<n2)
        swap(n1,n2);

    int numeroEstratto=rand()%(n1-n2+1)+n2; //n1 massimo, n2 minimo
    return numeroEstratto;
}
