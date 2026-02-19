#include <stdio.h>

int main()
{
    int n,totalRainfall = 0,heavyRainDays = 0,daysRain; 
    scanf("%d", &n); 
    for(int i = 1; i <= n; i++) { 
        scanf("%d", &daysRain); 
        totalRainfall += daysRain; 
        if (daysRain > 50) { 
            heavyRainDays++;
        }
    }
    printf("Total rainfall: %d\n", totalRainfall); 
    printf("Heavy Rain Days: %d\n", heavyRainDays); 
    return 0;
}