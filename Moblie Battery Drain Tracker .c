#include <stdio.h>

int main()
{
  int battery,n,drain,i;
  scanf("%d%d",&battery,&n);
  for(i = 1; i <= n; i++) {
        scanf("%d",&drain);
        battery = battery - drain;
    }
    printf("Remaining battery : %d%%", battery);

    return 0;
}