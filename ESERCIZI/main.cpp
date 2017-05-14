#include <iostream>
#include <string>


using namespace std;

int main()
{
//  1 Test OK
/*
    int ETA = 0;
    cout << "Inserisci la tua eta':  "; cin>> ETA;

//    if (ETA <=0)
//    cout<< "Inserisci un'eta' maggiore di zero";
//    else
//        if (ETA >120)
//        cout << "inserisci un'eta' inferiore ai 120 anni";
//        else
//            if (ETA <18)
//            cout << "Sei minorenne";
//            else
//            cout << "Sei maggiorenne";

    if (ETA<=0 || ETA>120)
        cout<<"Eta' non valida";
    else
        if (ETA<18)
        cout<<"Sei minorenne";
        else
        cout<<"Sei maggiorenne";
*/
//  2 Test NO
/*
    char GS = 'Lunedi';
    char TG = 0;

    cout << "che gorno della settimana e'?  ";
    cin >> TG;

    if (GS==TG)
    {
        cout << "Che brutto giorno";
    }
    else
    {
        cout <<"Ci sono giorno peggiori!";
    }
*/


//  3 Test OK
/*
    int EUR =0,DOL =0;

    cout <<"Inserisci quanti EURO hai:  ";
    cin>>EUR;
    cout<<"Inserisci quanti DOLLARI hai:  ";
    cin>>DOL;
    if(EUR*1.35>DOL)
    {
        cout<<"Possiedi piu' EURO!";
    }
    else
    {
        cout<<"Possiedi piu' DOLLARI!";
    }

*/

//  4 Test OK
/*
    int NUM=0;

    cout<<"Inserisci un numero:  ";
    cin>>NUM;

//    if (NUM%2==0)
//    cout<<"Il numero e' pari";
//    else
//    cout<<"Il numero e' dispari";

    if (NUM%2) //La logica boleana ci dice che 0=Falso e tutti gli altri numeri sono veri quindi
        cout<<"Dispari";
    else
        cout<<"Pari";

*/

//  5 Test NO
//
//    char VOC = 'a,e,i,o,u';
//    char UTT = 0;
//
//    cout<<"Inserisci una lettera:  ";
//    cin>>UTT;
//
//    if (UTT==VOC)
//    {
//        cout<<"La lettera e' una vocale";
//    }
//    else
//    {
//        cout<<"La lettera e' una consonante";
//    }


// 6 Test SI
/*
    int A=0;
    int B=0;
    int C=0;

    cout<<"Inserisci un numero:  ";
    cin>>A;
    cout<<"Inserisci un secondo numero:  ";
    cin>>B;
    cout<<"Inserisci un terzo numero:  ";
    cin>>C;

    if (B>=A&&B<=C)
    {
        cout<<"SI!";
    }
    else
    {
        cout<<"NO";
    }
*/

//  7 Test OK
/*
    int ANNO=0;

    cout<<"In che anno siamo?  ";
    cin>>ANNO;

    if (ANNO%400==0 || (ANNO%4==0 && ANNO%100!=0))
    {
        cout<<"E' un anno bisestile";
    }
    else
    {
        cout<<"Non e' un anno bisestile";
    }
*/
//  8 Test OK
//
//    double A=0;
//    double B=0;
//    double C=0;
//    double D=0;
//
//    cout<<"Inserisci un numero:  ";
//    cin>>A;
//    cout<<"Inserisci un secondo numero:  ";
//    cin>>B;
//    cout<<"Inserisci un terzo numero:  ";
//    cin>>C;
//
//    D=(A+B+C)/3;
//
//    cout<<"La media aritmetica dei tre numeri e' "<<D<<endl;
//
// PRIMO MODO
//    if(A==D or B==D or C==D)
//    {
//        cout<<"Almeno un'numero e' uguale alla media aritmetica";
//    }
//    else
//    {
//        cout<<"Nessun numero e' uguale alla media aritmetica";
//    }
//  SECONDO MODO
//    if (A==D)
//        cout<<"Il primo numero e' uguale alla media aritmetica\n";
//    if (B==D)
//        cout<<"Il secondo numero e' uguale alla media aritmetica\n";
//    if (C==D)
//        cout<<"Il terzo numero e' uguale alla media aritmetica\n";
//    if (A!=D&&B!=D&&C!=D)
//        cout<<"Nessun numero e' uguale alla media aritmetica\n";
//  TERZO MODO
//    int FAL=0;
//
//    if (A==D)
//        {cout<<"Il primo numero e' uguale alla media aritmetica\n";FAL=1;}
//    if (B==D)
//        {cout<<"Il secondo numero e' uguale alla media aritmetica\n";FAL=2;}
//    if (C==D)
//        {cout<<"Il terzo numero e' uguale alla media aritmetica\n";FAL=3;}
//    if (FAL==0)
//        cout<<"Nessun numero e' uguale alla media aritmetica\n";
//
// 9 Test OK
/*
    int A=0;
    int B=0;
    int C=0;

    cout<<"Inserisci un numero:  ";
    cin>>A;
    cout<<"Inserisci un secondo numero:  ";
    cin>>B;
    cout<<"Inserisci un terzo numero:  ";
    cin>>C;

    if (A>B&&A>C)
    {
        cout<<"Il primo numero e' il piu' grande";
    }
    else
    {
        if (B>C)
        {
            cout<<"Il secondo numero e' il piu' grande";
        }
        else
        {
            cout<<"Il terzo numero e' il piu' grande";
        }
    }
*/

//  10 Test OK
/*
    int PESO=0;

    cout<<"Inserisci il peso:  ";
    cin>>PESO;

    if (PESO<=0)
    {
        cout<<"Il peso inserito non e' valido";
    }
    else
    {
        if (PESO<=50)
        {
            cout<<"Categoria A";
        }
        else
        {
            if (PESO<=125)
            {
                cout<<"Categoria B";
            }
            else
            {
                if (PESO<=200)
                {
                    cout<<"Categoria C";
                }
                else
                {
                    if (PESO>200)
                    {
                    cout<<"Categoria D";
                    }

                }
            }
        }
    }
*/

//  11 Test OK
/*
    int GIORNO=0;
    int MESE=0;
    int ANNO=0;

    cout<<"Inserisci il giorno:  ";
    cin>>GIORNO;
    cout<<"Inserisci il mese:  ";
    cin>>MESE;
    cout<<"Inserisci l'anno:  ";
    cin>>ANNO;

    GIORNO=GIORNO+1;

    if(GIORNO>45)
    {
        GIORNO=1;
        MESE=MESE+1;

        if (MESE>18)
        {
            MESE=1;
            ANNO=ANNO+1;
        }
        cout<<"Domani sara' il "<<GIORNO<<"/"<<MESE<<"/"<<ANNO;
    }
    else
    {
        cout<<"Domani sara' il "<<GIORNO<<"/"<<MESE<<"/"<<ANNO;
    }
*/
//  12 Test OK
//*
//    int A=0,B=0,C=0;
//
//    cout<<"Inserisci un numero:  ";
//    cin>>A;
//    cout<<"Inserisci un secondo numero:  ";
//    cin>>B;
//    cout<<"Inserisci un terzo numero:  ";
//    cin>>C;

//    if (A>B&&A>C)
//    {   cout<<A<<"/";
//        if (B>C)
//            cout<<B<<"/"<<C;
//        else
//            cout<<C<<"/"<<B;
//    }
//    else
//        if (B>A&&B>C)
//        {   cout<<B<<"/";
//            if (A>C)
//                cout<<A<<"/"<<C;
//                else
//                cout<<C<<"/"<<A;
//        }
//        else
//            cout<<C<<"/";
//            if (A>B)
//                cout<<A<<"/"<<B;
//                else
//                cout<<B<<"/"<<A;
//
//    int scambio=0;
//
//    if (A>B)
//        {scambio=A;A=B;B=scambio;}
//    if (A>C)
//        {scambio=A;A=C;C=scambio;}
//    if (B>C)
//        {scambio=B;B=C;C=scambio;}
//    cout<<endl<<A<<" "<<B<<" "<<C;
//*/
// 13 Test OK
/*
    int A=0;
    int B=0;
    int C=0;

    cout<<"Inserisci un numero:  ";
    cin>>A;
    cout<<"Inserisci un secondo numero:  ";
    cin>>B;
    cout<<"Inserisci un terzo numero:  ";
    cin>>C;

    if (A-B==B-C)
    {
        cout<<"Sono in sequenza aritmetica";
    }
    else
    {
        cout<<"Non sono in sequenza";
    }
*/
// 14 Test OK


    int A=0;
    int B=0;
    int C=0;

    cout<<"Inserisci il primo lato del triangolo:  ";
    cin>>A;
    cout<<"Inserisci il secondo lato del triangolo:  ";
    cin>>B;
    cout<<"Inserisci l'ultimo lato del triangolo:  ";
    cin>>C;

    if(A<B+C&&B<A+C&&C<A+B)
        cout<<"Triangolo";
    else
        cout<<"NO Triangolo";

// 15 Test
//
//    int escludi_da=1970,escludi_a=2000,anno=0;
//
//    cout<<"In che anno sei nato?:  ";
//    cin>>anno;
//
//    if  (anno>escludi_da&&anno<escludi_a)cout<<"No grazie";else cout<<"Vuoi partecipare ad un sondaggio?";
//
//    if  (anno<escludi_da||anno>escludi_a)cout <<"Vuoi partecipare ad un sondaggio?";

}
