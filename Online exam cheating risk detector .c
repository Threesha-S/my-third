#include <stdio.h>

int main() {
    int n,score,total = 0,highRisk = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &score);     
        total = total + score;          
        if (score > 50)         
            highRisk++;
    }

    printf("Total Risk: %d\n", total);
    printf("High Risk Sessions: %d\n", highRisk);

    return 0;
}