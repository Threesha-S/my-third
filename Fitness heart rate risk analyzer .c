#include <stdio.h>

int main() {
    int n,heartrate,maxheartrate = 0, danger = 0;
    scanf("%d",&n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &heartrate);           
        if (heartrate > maxheartrate) maxheartrate = heartrate;  
        if (heartrate > 140) danger++;      
    }

    printf("Max Heart Rate: %d\n", maxheartrate);
    printf("Danger Readings: %d\n", danger);

    return 0;
}