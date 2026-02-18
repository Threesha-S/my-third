#include <stdio.h>
int main(){
  int n,i,expense,Total=0,count=0;
  scanf("%d", &n);
  for (i = 1;i <= n;i++){
    scanf("%d", &expense);
    Total=Total+expense;
    if(expense > 1000)
    {
      count++;
    }
    }
    printf("Total expense: %d\n", Total);
    printf("overspend Days: %d", count);
    return 0;
}