#include <stdio.h>

int main() {
    int P,N,result = 1,i;
    scanf("%d%d",&N,&P);
    for ( i = 1; i <= P; i++) {
        result =result * N;
    }
    printf("%d", result); 

    return 0;
}
