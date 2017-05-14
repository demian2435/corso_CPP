#include <iostream>

using namespace std;

int selectionS(int n[],int MAX)
{
    int cont=0;

    for(int c=0;c<MAX;c++)
    {
        for(int i=0;i<MAX-1;i++)
        {++cont;
        if(n[c]<n[i])
        swap(n[c],n[i]);
        cout<<cont<<endl;}
    }

    return 0;
}

int bubbleS(int n[],int MAX)
{
    int cont=0;
    for(int c=0;c<MAX-1;c++)
    {int temp=MAX;temp--;
        for(int i=0;i<temp;i++)
        {++cont;
        if(n[i]>n[i+1])
        swap(n[i+1],n[i]);
        cout<<cont<<endl;}
    }

    return 0;
}

int cocktailS(int n[],int MAX)
{
    int cont=0;
    for(int c=0;c<MAX-1;c++)
    {int temp=MAX;temp--;
     int i=0;i++;
        for(;i<temp;i++)
        {++cont;
        if(n[i]>n[i+1])
        swap(n[i+1],n[i]);
        cout<<cont<<endl;
        for(;i>=temp;i--)
        ++cont;
        if(n[i]<n[i-1])
        swap(n[i-1],n[i]);
        cout<<cont<<endl;}
    }

    return 0;
}

int combS(int n[],int MAX)
{
    int cont=0;
    for(int x=MAX/2;x>1;x--)
    {
        for(int i=0;(i+x)<MAX;i++)
        {++cont;
        if(n[i]>n[i+x])
        swap(n[i+x],n[i]);
        cout<<cont<<endl;}
    }

    return 0;
}

int gnomeS(int n[],int MAX)
{
    int cont=0;
    for(int x=MAX/3;x<MAX;x++)
    {
        for(int i=0;x>i;i++)
        {++cont;
        if(n[x]<n[i])
        swap(n[i],n[x]);
        cout<<cont<<endl;}
    }

    return 0;
}

int oddS(int n[],int MAX)
{
    int cont=0;
    for (int i=0;i<MAX;i++)
    {
         if (i&1) // 'i' is odd
         {//cout<<i<<" &1"<<endl;
             for (int j=2;j<MAX;j+=2)
             {cont++;
                if (n[j]<n[j-1])
                swap(n[j-1],n[j]);
             }
          }
          else
          {//cout<<i<<" else"<<endl;
              for (int j = 1 ; j < MAX ; j += 2)
              {cont++;
                   if (n[j] < n[j-1])
                       swap (n[j-1], n[j]) ;
              }
          } cout<<cont<<endl;
    }

    return 0;
}

int main()
{
    time_t start=0, stop=0;

    const int MAX_NUM=25;
    int numeri[MAX_NUM]={64,80,23,45,67,43,21,90,78,65,4,2,8,67,5,90,77,65,44,22,11,33,44,1,53};
    bool ON=true;
    for(int i=0;i<MAX_NUM;i++)
        cout<<numeri[i]<<" ";

    while(ON)
    {
        int scelta=0;
        cout<<"\nScegli una tecnica per riordinare i numeri:\n1: Selection Sort\n2: Bubble Sort\n3: Cocktail Shaker Sort\n4: Comb Sort\n5: Gnome Sort\n6: Odd Even Sort";
        cin>>scelta;

        switch(scelta)
        {
            case 1:{ON=false;int risultato=selectionS(numeri,MAX_NUM);break;}
            case 2:{ON=false;int risultato=bubbleS(numeri,MAX_NUM);break;}
            case 3:{ON=false;int risultato=cocktailS(numeri,MAX_NUM);break;}
            case 4:{ON=false;int risultato=combS(numeri,MAX_NUM);break;}
            case 5:{ON=false;int risultato=gnomeS(numeri,MAX_NUM);break;}
            case 6:{ON=false;int risultato=oddS(numeri,MAX_NUM);break;}
            default:cout<<"\nComando non riconosciuto\n\n";break;
        }
    }

    for(int i=0;i<MAX_NUM;i++)
        cout<<numeri[i]<<" ";
}
