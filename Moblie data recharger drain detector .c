#include <stdio.h>
int main()
{ 
  int totaldata,n,i,usage,successfuldays = 0;
  scanf("%d%d",&totaldata,&n);
  for(i = 1;i < n;i++){
    scanf("%d",&usage);
    if(totaldata >= usage){
      totaldata = totaldata - usage;
      successfuldays++;
    }
    else{
      break;
    }
  }
  printf("Remaining data: %d\n",totaldata);
  printf("successful days: %d",successfuldays);
  return 0;
}