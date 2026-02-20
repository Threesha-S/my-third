#include <stdio.h>

int main() {
    int Capacity,n,items,overflowDays = 0;
    scanf("%d", &Capacity);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &items);        
        Capacity = Capacity - items;         
        if (Capacity < 0) {
            overflowDays++;        
        }
    }
    printf("Remaining Capacity: %d\n", Capacity);
    printf("Overflow Days: %d\n", overflowDays);
    
    return 0;
}