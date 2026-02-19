#include <stdio.h>
int main()
{
  int i,salary,absentday;
  scanf("%d%d",&salary,&absentday);
  for(i = 1;i <= absentday;i++){
    salary = salary - 100;
  }
    printf("Final salary :₹%d",salary);
    return 0;
}