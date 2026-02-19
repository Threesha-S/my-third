#include <stdio.h>

int main()
{
  int n,i,patients,totalpatients=0,overcrowdeddays=0;
  scanf("%d",&n);
  for(i = 1;i <= n;i++){
    scanf("%d",&patients);
    totalpatients += patients;
    if(patients > 100){
      overcrowdeddays++;
    }
  }
  printf("Total patients: %d\n",totalpatients);
  printf("Overcrowdeddays: %d",overcrowdeddays);


  return 0;
}