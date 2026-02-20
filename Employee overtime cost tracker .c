#include <stdio.h>

int main()
{
    int n,hours,i,totalhours=0,heavydays=0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
      scanf("%d", &hours);
      totalhours = totalhours + hours;
        if(hours > 3){
          heavydays++;
        }
    }
    int overtimecost = totalhours * 200;
    printf("Total time cost : %d\n",totalhours);
    printf("overtimecost : %d\n",overtimecost);
    printf("Heavy overtime days : %d",heavydays);

    return 0;
}