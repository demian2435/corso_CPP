#include <iostream>

using namespace std;

int main()
{
    int pomodoro=1;
    int pomodori=1;
    int uovo=2;
    int uova=2;
    int fagioli=3;

    string ingredienti[10];

    cout<<"Quali ingredienti hai? (Digita 'X' per finire)\n";

    int i=0;
    for(i=0;i<10;i++)
    {cin>>ingredienti[i];
    if(ingredienti[i]=="X")
    break;}

    cout<<endl;

    for(int n=0;n<i;n++)
    cout<<ingredienti[n]<<endl;




cout<<endl<<endl<<endl;}
