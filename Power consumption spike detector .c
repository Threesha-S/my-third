#include <stdio.h>

int main() {
    int N, units, total = 0, spikes = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &units);      
        total = total + units;            
        if (units > 5)            
            spikes++;
    }
    printf("Total Units: %d\n", total);
    printf("Spike Hours: %d\n", spikes);
    return 0;
}