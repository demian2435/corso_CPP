#include <iostream>

using namespace std;

const int TOTRIC=20;
const int TOTING=6;

struct ricetta {
  string ingredienti[TOTING];
  int    tempo;
};

struct indice {
    int indice;
    string nome;
    ricetta metodo;
};

struct indice ricette[TOTRIC];

int main ()
{

ricette[0].indice = 1;
ricette[0].nome = "Pasta Cacio e pepe";
ricette[0].metodo.tempo = 10;

ricette[0].metodo.ingredienti[0] = "Parmigiano";
ricette[0].metodo.ingredienti[1] = "Pecorino";
ricette[0].metodo.ingredienti[2] = "Pepe";
ricette[0].metodo.ingredienti[3] = "";
ricette[0].metodo.ingredienti[4] = "";
ricette[0].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[1].indice = 2;
ricette[1].nome = "Pasta all'Amatriciana";
ricette[1].metodo.tempo = 25;

ricette[1].metodo.ingredienti[0] = "Pomodoro";
ricette[1].metodo.ingredienti[1] = "Pecorino";
ricette[1].metodo.ingredienti[2] = "Guanciale";
ricette[1].metodo.ingredienti[3] = "Cipolla";
ricette[1].metodo.ingredienti[4] = "Basilico";
ricette[1].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[2].indice = 3;
ricette[2].nome = "Pasta alla Carbonara";
ricette[2].metodo.tempo = 15;

ricette[2].metodo.ingredienti[0] = "Pancetta";
ricette[2].metodo.ingredienti[1] = "Pecorino";
ricette[2].metodo.ingredienti[2] = "Pepe";
ricette[2].metodo.ingredienti[3] = "Cipolla";
ricette[2].metodo.ingredienti[4] = "Uova";
ricette[2].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[3].indice = 4;
ricette[3].nome = "Pasta Speck e Crema di Parmigiano";
ricette[3].metodo.tempo = 15;

ricette[3].metodo.ingredienti[0] = "Speck";
ricette[3].metodo.ingredienti[1] = "Parmigiano";
ricette[3].metodo.ingredienti[2] = "Cipolla";
ricette[3].metodo.ingredienti[3] = "Pepe";
ricette[3].metodo.ingredienti[4] = "";
ricette[3].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[4].indice = 5;
ricette[4].nome = "Pasta al Pachino";
ricette[4].metodo.tempo = 15;

ricette[4].metodo.ingredienti[0] = "Pachino";
ricette[4].metodo.ingredienti[1] = "Basilico";
ricette[4].metodo.ingredienti[2] = "Parmigiano";
ricette[4].metodo.ingredienti[3] = "Aglio";
ricette[4].metodo.ingredienti[4] = "";
ricette[4].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[5].indice = 6;
ricette[5].nome = "Pasta ai Peperoni";
ricette[5].metodo.tempo = 25;

ricette[5].metodo.ingredienti[0] = "Peperoni";
ricette[5].metodo.ingredienti[1] = "Cipolla";
ricette[5].metodo.ingredienti[2] = "Parmigiano";
ricette[5].metodo.ingredienti[3] = "Timo";
ricette[5].metodo.ingredienti[4] = "";
ricette[5].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[6].indice = 7;
ricette[6].nome = "Pasta Aglio, Olio e Peperoncino";
ricette[6].metodo.tempo = 10;

ricette[6].metodo.ingredienti[0] = "Aglio";
ricette[6].metodo.ingredienti[1] = "Peperoncino";
ricette[6].metodo.ingredienti[2] = "Olio";
ricette[6].metodo.ingredienti[3] = "";
ricette[6].metodo.ingredienti[4] = "";
ricette[6].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[7].indice = 8;
ricette[7].nome = "Pasta alla Gricia";
ricette[7].metodo.tempo = 15;

ricette[7].metodo.ingredienti[0] = "Guanciale";
ricette[7].metodo.ingredienti[1] = "Cipolla";
ricette[7].metodo.ingredienti[2] = "Pecorino";
ricette[7].metodo.ingredienti[3] = "";
ricette[7].metodo.ingredienti[4] = "";
ricette[7].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[8].indice = 9;
ricette[8].nome = "Maccheroni Salad";
ricette[8].metodo.tempo = 10;

ricette[8].metodo.ingredienti[0] = "Tonno";
ricette[8].metodo.ingredienti[1] = "Piselli";
ricette[8].metodo.ingredienti[2] = "Maionese";
ricette[8].metodo.ingredienti[3] = "";
ricette[8].metodo.ingredienti[4] = "";
ricette[8].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[9].indice = 10;
ricette[9].nome = "Pasta al Tonno";
ricette[9].metodo.tempo = 10;

ricette[9].metodo.ingredienti[0] = "Tonno";
ricette[9].metodo.ingredienti[1] = "Pomodoro";
ricette[9].metodo.ingredienti[2] = "Aglio";
ricette[9].metodo.ingredienti[3] = "Prezzemolo";
ricette[9].metodo.ingredienti[4] = "";
ricette[9].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[10].indice = 11;
ricette[10].nome = "Pasta alla Carbonara con le Zucchine";
ricette[10].metodo.tempo = 25;

ricette[10].metodo.ingredienti[0] = "Pancetta";
ricette[10].metodo.ingredienti[1] = "Pecorino";
ricette[10].metodo.ingredienti[2] = "Cipolla";
ricette[10].metodo.ingredienti[3] = "Uova";
ricette[10].metodo.ingredienti[4] = "Pepe";
ricette[10].metodo.ingredienti[5] = "Zucchine";

////////////////////////////////////////////////////////////

ricette[11].indice = 12;
ricette[11].nome = "Pasta all'Anduja";
ricette[11].metodo.tempo = 15;

ricette[11].metodo.ingredienti[0] = "Anduja";
ricette[11].metodo.ingredienti[1] = "Pomodoro";
ricette[11].metodo.ingredienti[2] = "Cipolla";
ricette[11].metodo.ingredienti[3] = "Parmigiano";
ricette[11].metodo.ingredienti[4] = "";
ricette[11].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[12].indice = 13;
ricette[12].nome = "Straccetti e Rughetta";
ricette[12].metodo.tempo = 15;

ricette[12].metodo.ingredienti[0] = "Straccetti";
ricette[12].metodo.ingredienti[1] = "Rughetta";
ricette[12].metodo.ingredienti[2] = "Parmigiano";
ricette[12].metodo.ingredienti[3] = "Pepe";
ricette[12].metodo.ingredienti[4] = "Aglio";
ricette[12].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[13].indice = 14;
ricette[13].nome = "Pasta alla Pastora";
ricette[13].metodo.tempo = 15;

ricette[13].metodo.ingredienti[0] = "Pecorino";
ricette[13].metodo.ingredienti[1] = "Prezzemolo";
ricette[13].metodo.ingredienti[2] = "Aglio";
ricette[13].metodo.ingredienti[3] = "Peperoncino";
ricette[13].metodo.ingredienti[4] = "Olio";
ricette[13].metodo.ingredienti[5] = "";

////////////////////////////////////////////////////////////

ricette[14].indice = 15;
ricette[14].nome = "Pasta al Ragu'";
ricette[14].metodo.tempo = 60;

ricette[14].metodo.ingredienti[0] = "Macinato";
ricette[14].metodo.ingredienti[1] = "Parmigiano";
ricette[14].metodo.ingredienti[2] = "Pomodoro";
ricette[14].metodo.ingredienti[3] = "Carote";
ricette[14].metodo.ingredienti[4] = "Cipolla";
ricette[14].metodo.ingredienti[5] = "Sedano";




/////////////////STAMPA A SCHERMO

for(int r=0;r<TOTRIC;r++)
{ cout<<ricette[r].nome<<endl;
for(int i=0; i<TOTING;i++)
if(ricette[r].metodo.ingredienti[i]=="")
    i++;
else
    cout<<"Ingrediente n"<<i+1<<" "<<ricette[r].metodo.ingredienti[i]<<endl;
cout<<endl;
}

///////////////// RICERCA

string inserimento="";
bool trovato=false;
int trovate=0;
int Rtrovate[TOTRIC];

while(trovato==false)
{   cout<<"\nQuali ingredienti hai?\n";
    cin>>inserimento;
    cout<<endl;

        for(int r=0;r<TOTRIC;r++)
        for(int i=0; i<TOTING;i++)
        if(ricette[r].metodo.ingredienti[i]==inserimento)
        {   trovato=true;
            Rtrovate[trovate]=r;
            trovate+=1;
        }

if(trovato==false)
cout<<"--Nessuna ricetta trovata--\n";
else
break;

}

cout<<"Trovate ''"<<trovate<<"'' ricette"<<endl<<endl;
for(int t=0;t<trovate;t++)
 cout<<"Trovata ricetta n"<<ricette[Rtrovate[t]].indice<<" -> "<<ricette[Rtrovate[t]].nome<<endl;





}
