#include <stdio.h>

int main()
{
  int n,i,usage,total=0,highdays=0;
  scanf("%d",&n);
  for(i = 1;i <= n;i++){
    scanf("%d",&usage);
    total = total + usage;
    if(usage > 2){
      highdays = highdays + 1;
    }
  }
  printf("Total Data : %d\n", total);
  printf("High Usage Days : %d\n",highdays);

    return 0;
}