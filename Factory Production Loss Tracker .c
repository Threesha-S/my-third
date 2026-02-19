#include <stdio.h>

int main()
{
    int n,i,loss,units,totalloss=0,highloss=0;
    scanf("%d", &n); 
    for(i = 1; i <= n; i++) { 
      scanf("%d",&loss);
        totalloss = totalloss + loss; 
        if (loss > 100) { 
          highloss = highloss + 1;
        }
    }
    printf("Total loss: %d\n", totalloss); 
    printf("High loss Days: %d\n", highloss); 
    return 0;
}