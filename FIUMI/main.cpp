#include <iostream>
#include <string>


using namespace std;

int main()
{
    string fiumi[]={"PO","ADIGE","TEVERE","VOLTURNO","TIRSO","TAPPO"};

    int km[]={652,410,405,175,153,-1};

    int quantiFiumi=5;

    string fiumeCercato="";
    cout<<"Fiume da cercare "<<endl;
    cin>>fiumeCercato;

    fiumi[quantiFiumi]=fiumeCercato;//salvaguardia per evitare troppi cicli macchina

    int posFiume=0;
    for(posFiume=0;;posFiume++)
        if(fiumi[posFiume]==fiumeCercato) break;

    if(posFiume==quantiFiumi)
        cout<<"Fiume non trovato";
    else
        cout<<km[posFiume]<<"km";
}
