#include<stdio.h>
int main()
{
    int n,bt[100],wt[100],tat[100],awt=0,atat=0,i,j;
    printf("Enter total number of processes:");
    scanf("%d",&n);
    printf("\nEnter Process Burst Time \n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;  
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
    printf("\nProcess\t\tBurst Time\t\tWaiting Time\t\tTurnaround Time \n");
    printf("________________________________________________________________________________");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        awt+=wt[i];
        atat+=tat[i];
        printf("\nP[%d]\t\t\t%d\t\t\t%d\t\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    printf("\n________________________________________________________________________________");
    awt/=i;
    atat/=i;
    printf("\n\n Average Waiting Time = %d \n",awt);
    printf("\n Average Turnaround Time = %d \n",atat);
    return 0;
}
