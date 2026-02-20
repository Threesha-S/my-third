#include <stdio.h>

int main()
{
    int n, i,voltage,minimum,low_count = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
      scanf("%d", &voltage);
      if(i == 1){
        minimum = voltage;
        
      }
      if(voltage < minimum){
        minimum = voltage;
        
      }
      if(voltage < 210){
        low_count++;
        
      }
      
    }
    printf("Minimum Voltage : %d\n", minimum);
    printf("Low Voltage Events : %d", low_count);

    return 0;
}