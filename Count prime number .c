#include <stdio.h>
int main()
{
  int N,i,j,count = 0,factor;
  scanf("%d", &N);
  for (i =1;i <= N; i++){
    factor = 0;
    for (j = 1; j <= i; j++){
      if (i % j == 0)
      {
        factor++;
      }
    }
    if(factor == 2)
    {
      count++;
    }
  }
    printf("%d", count);
    return 0;
}