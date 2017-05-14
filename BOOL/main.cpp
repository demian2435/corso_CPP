#include <iostream>
#include <string>

using namespace std;

        bool test (int X1, string X2)
    {
        if (X1>=100 && X2=="Naso")
            return true;
        if (X1<100 && X2=="Culo")
            return true;
        return false;
    }



int main()
{
    int A=0, B=0, C=0, D=0;

    cout<<"Inserisci due numeri ";
    cin>>A>>B;


    bool controllo = A<B || C<D;

    if (controllo)
        cout<<"Tutto ok";
    else
        cout<<"Non è andato a buon fine";

    int T1;
    string T2;

    cout<<endl<<"inserisci un numero ed una parola";
    cin>>T1>>T2;


    if (test(T1, T2))
        cout<<"OK";



}
