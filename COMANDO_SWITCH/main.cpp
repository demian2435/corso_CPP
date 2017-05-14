#include <iostream>
#include <string>

using namespace std;

int main()
{
    enum ris {si, no, forse};

    cout << "1: Risposta uno\n"<<"2: Risposta due\n"<<"3: Risposta tre\n";

    int risposta=0;
    cout<<"Rispondi -->  ";
    cin>>risposta;

    switch (risposta)
    {
        case 1:
        {
            cout<<"Hai rsposto 1";
        }
        break;

        case 20:
            cout<<"Hai risposto 2";
        break;

        case 3:
            cout<<"Hai risposto 3";
        break;

        case 'a':
            cout<<"Serio?";
        break;

        case ris::forse:
            cout<<"Serio2?";
        break;

        default:
            cout<<"Sei scemo";
        break;





    }
}
