#include <stdio.h>

int main()
{
    int n,delay,i,totaldelay=0,delayedcount=0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
      scanf("%d", &delay);
      totaldelay = totaldelay + delay;
        if(delay > 30){
          delayedcount++;
        }
    }
    printf("Total delay : %d\n",totaldelay);
    printf("Delayed deliveries : %d",delayedcount);

    return 0;
}