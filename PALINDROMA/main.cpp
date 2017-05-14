#include <iostream>

using namespace std;

int main()
{
    cout<<"Inserisci una parola e ti diro' se e' palindroma: ";
    string s=""; cin>>s;

    bool palindroma=true;
    for (int sx=0,dx=s.length()-1;sx<dx;sx++,dx--)
    {
        if (s[sx]!=s[dx])
        {
            palindroma=false;
            break;
        }
    }
    if (palindroma)
        cout<<"E' palindroma";
    else
        cout<<"Non e' palindroma";

}
