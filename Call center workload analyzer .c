#include <stdio.h>

int main() {
    int n,calls,total = 0,overloaded = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&calls);      
        total = total + calls;           
        if (calls > 40)           
            overloaded++;
    }
    printf("Total Calls: %d\n", total);
    printf("Overloaded Hours: %d\n", overloaded);
    return 0;
}