#include <stdio.h>

int main()
{
  int num,n,collection,i;
  scanf("%d%d",&num,&n);
  for(i = 1; i <= n; i++) {
        collection = collection + num;
    }
    printf("Total collection : ₹%d",collection);

    return 0;
}
