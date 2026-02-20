#include <stdio.h>
int main()
{
    int n, i,revenue, total = 0,target = 500000,targetdays;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
      scanf("%d", &revenue);
      total = total + revenue;
    }
    printf("Total Revenue : %d\n", total);
    if(total > target){
      printf("Target Days : 0");
      
    }
    else{
        targetdays = (target - total) / revenue;
        printf("Target Days : %d", targetdays);
    }

    return 0;
}