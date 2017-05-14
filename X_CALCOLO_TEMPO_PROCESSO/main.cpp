#include <iostream>
#include <sys/time.h>

using namespace std;

timeval start, stop;
double elapsedTime;

void TEMPO (timeval start,timeval stop)
{
    elapsedTime = (stop.tv_sec - start.tv_sec) * 1000.0;
    elapsedTime += (stop.tv_usec - start.tv_usec) / 1000.0;
    cout<<endl<<endl<<elapsedTime << " ms\n";
}

int main()
{
    gettimeofday(&start, NULL);
    //CODICE..
    gettimeofday(&stop, NULL);

    TEMPO(start,stop);
}
