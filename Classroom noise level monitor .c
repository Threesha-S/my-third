#include <stdio.h>
int main()
{ 
  int n,i,noise,max = 0,count = 0;
  scanf("%d",&n);
  for(i = 1;i < n;i++){
    scanf("%d",&noise);
    if(noise > max){
      max = noise;
    }
    if(noise > 70){
      count++;
    }
  }
  printf("Maximum noise: %d\n",max);
  printf("Noisy periods: %d",count);
  return 0;
}