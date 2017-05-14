#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;
const int MAX_ELE=20000;
const int LETTERE=500;

string v[MAX_ELE];
string *vp_stringhe[MAX_ELE];

int main()
{
   time_t start=0, stop=0; //time_t è un tipo intero

   srand(10);//rand avrà sempre lo stessa sequenza salvata nel seme 10
   for(int i=0; i<MAX_ELE; i++)
   {
     int n = rand();//generiamo il numero
     string ns = to_string(n);//trasforma il numero in stringa "to_string", che poi verrà uniformato
     ns = string(5-ns.length(), '0') + ns;//genera una stringa di 5 caratteri meno la lunghezza del numero creato e rimpila con gli zeri e poi aggiungi ns

     v[i] = ns + string(LETTERE,'a'+rand()%26);//ed aggiungiamo le lettere al numero, dalla A a A+26=Z in codice ASCII
   }

   cout << "Inizio con gli array\n";
   start = time(0);

   //bubble sort
    for(int i=0; i<MAX_ELE - 1; i++)
    {
      for(int j=i+1; j<MAX_ELE; j++)
      {
       if(v[j]<v[i])
       {
          string temp = v[i];
          v[i] = v[j];
          v[j] = temp;
       }
      }
    }
    stop = time(0);

    cout << "Tempo impiegato con gli array: " << difftime(stop, start) << endl;
    cout << "I primi 10 come verifica:\n";
    for(int i=0; i<10;i++)
      cout << v[i].substr(0,10) << endl;//puoi vedere solo la prima parte di una strinda con substr(da 0 alla posizione 10)

    system("pause");

   srand(10);
   for(int i=0; i<MAX_ELE; i++)
   {
     int n = rand();
     string ns = to_string(n);
     ns = string(5-ns.length(), '0') + ns;

     v[i] = ns + string(LETTERE,'a'+rand()%26);

     vp_stringhe[i] = &v[i];
   }

   cout << "Inizio con puntatori\n";
   start = time(0);

    //bubble sort
    for(int i=0; i<MAX_ELE - 1; i++)
    {
      for(int j=i+1; j<MAX_ELE; j++)
      {
        if(*vp_stringhe[j] < *vp_stringhe[i])
         {
          string *temp = vp_stringhe[i];
          vp_stringhe[i] = vp_stringhe[j];
          vp_stringhe[j] = temp;
         }
      }
    }

    stop = time(0);
    cout << "Tempo impiegato con i puntatori: " << difftime(stop, start) << endl;
    cout << "I primi 10 come verifica:\n";
    for(int i=0; i<10;i++)
      cout << (*vp_stringhe[i]).substr(0,10) << endl;




    return 0;
}
