#include <stdio.h>

int main()
{
    int Cash,n,i,withdrawal,riskcount = 0;
    scanf("%d%d", &Cash,&n);
    for(i = 0; i < n; i++){
      scanf("%d", &withdrawal);
      Cash = Cash - withdrawal;
        if(Cash < 5000){
          riskcount++;
        }
    }
    printf("Remaining Cash : %d\n",Cash);
    printf("Risk Count : %d",riskcount);

    return 0;
}