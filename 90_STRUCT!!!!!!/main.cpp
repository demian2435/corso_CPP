#include <iostream>

using namespace std;

struct lightTimer {
  unsigned long time;
  int           percentage;
};

struct lightTable {
  lightTimer timer[50];
  int        otherVar;
};


struct lightTable channel[5];

int main ()
{

channel[5].timer[5].time = 5;
channel[5].timer[1].time = 1;
channel[5].timer[2].time = 2;
channel[5].timer[3].time = 3;
channel[5].timer[4].time = 4;

channel[5].timer[10].percentage = 50;
channel[2].otherVar = 50000;

cout<<channel[5].timer[5].time<<endl;

for(int i=0; i<50;i++)
    if(channel[5].timer[i].time==3)
        cout<<i;

}
