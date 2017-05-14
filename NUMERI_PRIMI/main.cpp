#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,i,n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    for (x=1;x<=1000;x++)
    {
        for (i=2;i<=x/2;i++)
            if (x%i == 0)
                break;
                    if (x==2)
                        cout<<x<<endl;
                            if (x%i != 0)
                             {
                                 cout<<x;
            if(x<10)
            {n0++;cout<<" n0"<<endl;}
            if(x>10&&x<100)
            {n1++;cout<<" n1"<<endl;}
            if(x>100&&x<200)
            {n2++;cout<<" n2"<<endl;}
            if(x>200&&x<300)
            n3++;
            if(x>300&&x<400)
            n4++;
            if(x<500)
            n5++;
            if(x<600)
            n6++;
            if(x<700)
            n7++;
            if(x<800)
            n8++;
            if(x<900)
            n9++;}

    }
    cout<<endl<<endl<<"n10 "<<n0<<endl;
    cout<<"n100 "<<n1<<endl;
    cout<<"n200 "<<n2<<endl;
    cout<<"n300 "<<n3<<endl;
    cout<<"n400 "<<n4<<endl;
    cout<<"n500 "<<n5<<endl;
    cout<<"n600 "<<n6<<endl;
    cout<<"n700 "<<n7<<endl;
    cout<<"n800 "<<n8<<endl;
    cout<<"n900 "<<n9<<endl;

}
