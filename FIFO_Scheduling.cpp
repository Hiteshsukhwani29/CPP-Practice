#include<iostream>
#include <time.h>

using namespace std;

void waitingtime(int p[], int n, int btime[], int wtime[]) {

    wtime[0] = 0;

    for (int i = 1; i < n; i++)
     {
        wtime[i] = btime[i-1] + wtime[i-1];
     }
}

void averagetime(int p[], int n, int btime[]) {

    int wtime[n];
    int t = 0;

    waitingtime(p, n, btime, wtime);

    cout<<"Process\t\tBurst Time\t\t\t\t Waiting Time\n";

    time_t end;
    for (int i = 0; i < n; i++)
    {
        time_t burst;

        cout<<"\n";
        t += wtime[i];

        cout<<i+1;

        cout<<"\t\t"<<btime[i];

        burst = btime[i];
        cout<<" [";

        for (float j = 0; j < burst; j++)
        {
            cout<<"-";
        }

        cout<<"] ";

        for (int j = burst; j < 11; j++)
        {
            cout<<" ";
        }

        cout<<"\t\t\t"<<wtime[i];

    }

    float avg = (float)t / (float)n;

    cout<<"\n\nAverage time: "<<avg<<" sec";
}


int main(void)
{

    int p[] = {1, 2, 3, 4, 5};
    int n = sizeof p / sizeof p[0];

    int btime[] = {13, 8, 3, 12,2};

    averagetime(p, n, btime);
}
