#include<stdio.h>
int main(void)

{
    int n,i,tinterarrival[50],tarrival[50];
    tinterarrival[0] = 0;
    tarrival[0] = 0;

    for(i=0;i<19;i++)
    {
      n = rand()%50;
      tinterarrival[i+1] = n;
    }
          for(i=0;i<19;i++)
          {
             tarrival[i+1] =  tarrival[i]+ tinterarrival[i+1];
          }
          printf("Customer no\t\tinterarrival time\tarrival time\n");
          for(i=0;i<20;i++)
          {
              printf("%d\t\t\t\t %dt\t\t\t\t\t\t %d\n",i+1,tinterarrival[i],tarrival[i]);
          }

}
