#include<stdio.h>

void main()
{
    int bursttime[20],process[20],waitingtime[20],turnaroundtime[20],n,total=0,k,t,i,j;
    float avg_waitingtime,avg_turnaroundtime;
    printf("Enter number of processes:");
    scanf("%d",&n);

    printf("\nEnter Burst Time:-\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bursttime[i]);
        process[i]=i+1;
    }

    for(i=0;i<n;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(bursttime[j]<bursttime[k])
                k=j;
        }

        t=bursttime[i];
        bursttime[i]=bursttime[k];
        bursttime[k]=t;

        t=process[i];
        process[i]=process[k];
        process[k]=t;
    }

    waitingtime[0]=0;
    for(i=1;i<n;i++)
    {
        waitingtime[i]=0;
        for(j=0;j<i;j++)
            waitingtime[i]+=bursttime[j];

        total+=waitingtime[i];
    }

    avg_waitingtime=(float)total/n;
    total=0;

    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        turnaroundtime[i]=bursttime[i]+waitingtime[i];
        total+=turnaroundtime[i];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",process[i],bursttime[i],waitingtime[i],turnaroundtime[i]);
    }

    avg_turnaroundtime=(float)total/n;
    printf("\n\nAverage Waiting Time=%f",avg_waitingtime);
    printf("\nAverage Turnaround Time=%f\n",avg_turnaroundtime);
}
