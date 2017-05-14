#include <iostream>

using namespace std;

void hanoi (int n, char da_qui, char a_qui,char appoggio)
{
    if (n==1)
        cout<<da_qui <<" - "<<a_qui<<endl;
    else
    {
        hanoi(n-1,da_qui,appoggio,a_qui);
        cout<< da_qui<<" - "<< a_qui<<endl;
        hanoi(n-1,appoggio,a_qui,da_qui);
    }
}

int main()
{
    hanoi (5,'A','B','C');
}
