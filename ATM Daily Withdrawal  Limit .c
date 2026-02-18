#include <stdio.h>
int main()
{
  int n,i,withdrawal,total = 0;
  scanf("%d%d", &n,&withdrawal);
  for (i = 0;i < n;i++) {
    total = total + withdrawal;
  }
  if(total <= 10000){
    printf("Approved\n");
  }
  else{
  printf("Limit Exceeded");
  }
  
  return 0;
}