#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
struct Punto
{
    T x;
    T y;
};

template <typename T>
struct Poligono
{
    int numero_lati;

    Punto<T> vertici[100];
};

template <typename T>
double distanza_tra_punti(T a, T b)
{
    return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));//sqrt=radice quadrata, pow potenza (somma i quadrati dei cateti)
}

template <typename T>
Punto<T> punto_medio(T a,T b)
{
    return T {(a.x+b.x)/2,(a.y+b.y)/2};
}

template <typename T>
double perimetro(Poligono<T> p)
{
    double risultato=0;
    for(int i=0;i<p.numero_lati-1;i++)
    risultato+=distanza_tra_punti(p.vertici[i], p.vertici[i+1]);
    risultato+=distanza_tra_punti(p.vertici[p.numero_lati-1], p.vertici[0]);//l'ultimo punto con il primo non viene fatto dentro for, quindi va aggiunto
    return risultato;
}


int main()
{
    Poligono<int> quadrato={4,{{0,0},{0,1},{1,1},{1,0}}};//quadrato2.vertici[0].x=0;quadrato2.vertici[0].y=0;

    cout<<"Il perimetro del poligono e' "<<perimetro(quadrato)<<endl<<endl;

    Poligono<double> NUOVO;

    cout<<"Inserisci i lati del poligono ";
    cin>>NUOVO.numero_lati;

    for(int i=0;i<NUOVO.numero_lati;i++)
    {
        cout<<"Inserisci le coordinate X del punto ("<<i+1<<") ";
        cin>>NUOVO.vertici[i].x;
        cout<<"Inserisci le coordinate Y del punto ("<<i+1<<") ";
        cin>>NUOVO.vertici[i].y;
    }
    cout<<perimetro(NUOVO);
}
