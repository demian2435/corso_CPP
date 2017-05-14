#include <iostream>
#include <time.h>

using namespace std;

const int LETTURE=240;

int main()
{
    srand(time(0));
    int num_centraline=0;double media=0.0;
    cout<<"Quante centraline? ";cin>>num_centraline;

    int* pAreaInt=new int [num_centraline*LETTURE];//Crea un contenitore dinamico che cambia RUNTIME,  GODO

    for(int c=0;c<num_centraline;c++)
    {
        for(int lettura=0;lettura<LETTURE;lettura++)
        {
            pAreaInt[c*LETTURE+lettura]=rand()%200+1;//0*240+0=0//0*240+1=1....
            media+=pAreaInt[c*LETTURE+lettura];
        }
    }

    int letture_totali=num_centraline*LETTURE;
    media=media/letture_totali;

    cout<<"Valore medio: "<<media<<endl;

//    for(int c=0;c<LETTURE;c++)
//        cout<<pAreaInt[c]<<endl;

    int superataMedia=0;
    for(int c=0;c<letture_totali;c++)
        if(pAreaInt[c]>media)superataMedia++;

    cout<<"Media superata "<<superataMedia;

    delete[] pAreaInt;
    pAreaInt=nullptr;
}
