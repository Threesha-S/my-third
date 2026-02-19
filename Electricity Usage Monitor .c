#include <stdio.h>
int main()
{
  int n,i,units,total = 0;
  scanf("%d%d", &n,&units);
  for (i = 0;i < n;i++) {
    total = total + units;
  }
  printf("Total Units : %d",total);
  return 0;
}